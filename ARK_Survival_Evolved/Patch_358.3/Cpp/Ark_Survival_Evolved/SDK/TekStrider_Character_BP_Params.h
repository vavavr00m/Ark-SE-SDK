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
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Get Charge Variable Interface
	 */
	struct ATekStrider_Character_BP_C_GetChargeVariableInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ELBU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SVOF[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ivalue;                                                  // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.GetNumBatteries
	 */
	struct ATekStrider_Character_BP_C_GetNumBatteries_Params
	{
	public:
		int32_t                                                    numBatteries;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPOnDinoCheat
	 */
	struct ATekStrider_Character_BP_C_BPOnDinoCheat_Params
	{
	public:
		class FName                                                CheatName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSetValue;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_POI7[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Restrict Transmitter VFX
	 */
	struct ATekStrider_Character_BP_C_RestrictTransmitterVFX_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.BP_OnStartCarried
	 */
	struct ATekStrider_Character_BP_C_BP_OnStartCarried_Params
	{
	public:
		class APrimalDinoCharacter*                                aDino;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPCanCryo
	 */
	struct ATekStrider_Character_BP_C_BPCanCryo_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Get Number Of Missions Required To Tame This Strider Scaled By Level
	 */
	struct ATekStrider_Character_BP_C_GetNumberOfMissionsRequiredToTameThisStriderScaledByLevel_Params
	{
	public:
		int32_t                                                    OutputPin;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.release right click
	 */
	struct ATekStrider_Character_BP_C_releaserightclick_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Timeout Check for Still Holding Right Click
	 */
	struct ATekStrider_Character_BP_C_TimeoutCheckforStillHoldingRightClick_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.update shield item durability based on health
	 */
	struct ATekStrider_Character_BP_C_updateshielditemdurabilitybasedonhealth_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Deactivate Transmitter Vfx on Timer
	 */
	struct ATekStrider_Character_BP_C_DeactivateTransmitterVfxonTimer_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Triggered Lethal Dmg
	 */
	struct ATekStrider_Character_BP_C_TriggeredLethalDmg_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.ResetLinkedDediStorageRepVars
	 */
	struct ATekStrider_Character_BP_C_ResetLinkedDediStorageRepVars_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.MakeDediStorageTitleString
	 */
	struct ATekStrider_Character_BP_C_MakeDediStorageTitleString_Params
	{
	public:
		class FString                                              BoxName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor)
		class UClass*                                              ItemType;                                                // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AShooterPlayerController*                            ForShooterPC;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ItemCount;                                               // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DistanceToBox;                                           // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              ReturnValue;                                             // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.UpdateLinkedDediStorageRepVars
	 */
	struct ATekStrider_Character_BP_C_UpdateLinkedDediStorageRepVars_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.ConstructLinkedDediStorageTitle
	 */
	struct ATekStrider_Character_BP_C_ConstructLinkedDediStorageTitle_Params
	{
	public:
		class AShooterPlayerController*                            ForShooterPC;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              Title;                                                   // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Has Mutagel in Last Slot
	 */
	struct ATekStrider_Character_BP_C_HasMutagelinLastSlot_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HasMutagelInLastSlot;                                    // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7NZS[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Force Destroy Strider
	 */
	struct ATekStrider_Character_BP_C_ForceDestroyStrider_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.affinity per hack calculation
	 */
	struct ATekStrider_Character_BP_C_affinityperhackcalculation_Params
	{
	public:
		float                                                      Tamingspeedmultiplier;                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       fordetectingaffinity;                                    // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W1QY[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		bool                                                       ingraceperiod;                                           // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4L7J[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      timeuntilgraceperiodends;                                // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      timeuntilnomoreaffinity;                                 // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      affinitygainedbeforetamingmult;                          // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.amount of affinity gained as appropriate to the dino level
	 */
	struct ATekStrider_Character_BP_C_amountofaffinitygainedasappropriatetothedinolevel_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.RefreshNearbyDediStorageArrays
	 */
	struct ATekStrider_Character_BP_C_RefreshNearbyDediStorageArrays_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.CanTransferAnyItemsToNearbyDediStorages
	 */
	struct ATekStrider_Character_BP_C_CanTransferAnyItemsToNearbyDediStorages_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.CanTransferItemToDediStorage
	 */
	struct ATekStrider_Character_BP_C_CanTransferItemToDediStorage_Params
	{
	public:
		class UPrimalItem*                                         CheckItem;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class ABP_DedicatedStorage_C*                              CheckStorage;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bCheckForBlacklist;                                      // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bResult;                                                 // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.CanUseLinkedDediStorageLogic
	 */
	struct ATekStrider_Character_BP_C_CanUseLinkedDediStorageLogic_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MA35[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.GetLinkedDediStorageFloatingHudTitle
	 */
	struct ATekStrider_Character_BP_C_GetLinkedDediStorageFloatingHudTitle_Params
	{
	public:
		class AShooterPlayerController*                            ForShooterPC;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              TitleString;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
		struct FLinearColor                                        TitleColor;                                              // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.GetNameStringForDediStorage
	 */
	struct ATekStrider_Character_BP_C_GetNameStringForDediStorage_Params
	{
	public:
		class ABP_DedicatedStorage_C*                              ForStorage;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AShooterPlayerController*                            ForShooterPC;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bAppendDistance;                                         // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IGH7[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              NameString;                                              // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.ValidateLinkedDediStorage
	 */
	struct ATekStrider_Character_BP_C_ValidateLinkedDediStorage_Params
	{
	public:
		bool                                                       bIsValid;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.TryTransferItemsToLinkedDediStorage
	 */
	struct ATekStrider_Character_BP_C_TryTransferItemsToLinkedDediStorage_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.RemoveIncompatibleDediStoragesFromArray
	 */
	struct ATekStrider_Character_BP_C_RemoveIncompatibleDediStoragesFromArray_Params
	{
	public:
		TArray<class ABP_DedicatedStorage_C*>                      FromArray;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.TryTransferItemsToNearbyDediStorages
	 */
	struct ATekStrider_Character_BP_C_TryTransferItemsToNearbyDediStorages_Params
	{
	public:
		class AShooterPlayerController*                            ForShooterPC;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSuccess;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F0X6[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.IsBlacklistedItemClass
	 */
	struct ATekStrider_Character_BP_C_IsBlacklistedItemClass_Params
	{
	public:
		class UClass*                                              CheckItemClass;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bResult;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WCCV[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.IsDediStorageUsable
	 */
	struct ATekStrider_Character_BP_C_IsDediStorageUsable_Params
	{
	public:
		class ABP_DedicatedStorage_C*                              CheckStorage;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bResult;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.FindNearbyUsableDediStorageBoxes
	 */
	struct ATekStrider_Character_BP_C_FindNearbyUsableDediStorageBoxes_Params
	{
	public:
		bool                                                       bSortByDistance;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bRemoveIncompatibleStorages;                             // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bRemoveLinkedStorage;                                    // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bFoundAny;                                               // 0x0003(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VAYX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class ABP_DedicatedStorage_C*>                      FoundBoxes;                                              // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.TryDoDediStorageHarvestTransferMultiUse
	 */
	struct ATekStrider_Character_BP_C_TryDoDediStorageHarvestTransferMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSuccess;                                                // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GX05[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.ClientDoDediStorageHarvestTransferMultiUse
	 */
	struct ATekStrider_Character_BP_C_ClientDoDediStorageHarvestTransferMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ClientUseIndex;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSuccess;                                                // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HOW9[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.GetDediStorageHarvestTransferMultiUseEntries
	 */
	struct ATekStrider_Character_BP_C_GetDediStorageHarvestTransferMultiUseEntries_Params
	{
	public:
		TArray<struct FMultiUseEntry>                              AppendToEntries;                                         // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		class AShooterPlayerController*                            ForShooterPC;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPClientHandleNetExecCommand
	 */
	struct ATekStrider_Character_BP_C_BPClientHandleNetExecCommand_Params
	{
	public:
		class FName                                                CommandName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0008(0x0040)  (Parm, OutParm, ReferenceParm)
		class APlayerController*                                   ForPC;                                                   // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPOnRefreshColorization
	 */
	struct ATekStrider_Character_BP_C_BPOnRefreshColorization_Params
	{
	public:
		TArray<struct FLinearColor>                                Colors;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.ClearLinkedDediStorage
	 */
	struct ATekStrider_Character_BP_C_ClearLinkedDediStorage_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.BP_OnUncryo
	 */
	struct ATekStrider_Character_BP_C_BP_OnUncryo_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.BP_OnCryo
	 */
	struct ATekStrider_Character_BP_C_BP_OnCryo_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.SetLinkedDediStorage
	 */
	struct ATekStrider_Character_BP_C_SetLinkedDediStorage_Params
	{
	public:
		class ABP_DedicatedStorage_C*                              NewLinkedStorage;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Change Filter to Only Dinos
	 */
	struct ATekStrider_Character_BP_C_ChangeFiltertoOnlyDinos_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Change Filter to Only Humans
	 */
	struct ATekStrider_Character_BP_C_ChangeFiltertoOnlyHumans_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Change Filter to Both Dinos And Humans
	 */
	struct ATekStrider_Character_BP_C_ChangeFiltertoBothDinosAndHumans_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Detect Quicktap Right Click
	 */
	struct ATekStrider_Character_BP_C_DetectQuicktapRightClick_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Spawn tamed inventory
	 */
	struct ATekStrider_Character_BP_C_Spawntamedinventory_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.spawn wild Inventory
	 */
	struct ATekStrider_Character_BP_C_spawnwildInventory_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.determine and request appropriate melee attack
	 */
	struct ATekStrider_Character_BP_C_determineandrequestappropriatemeleeattack_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.BlueprintGetAttackWeight
	 */
	struct ATekStrider_Character_BP_C_BlueprintGetAttackWeight_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      inputWeight;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.combined can attack
	 */
	struct ATekStrider_Character_BP_C_combinedcanattack_Params
	{
	public:
		int32_t                                                    attackindex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      dist;                                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackrangeoffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       canattack;                                               // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G148[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.BlueprintCanRiderAttack
	 */
	struct ATekStrider_Character_BP_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.BlueprintCanAttack
	 */
	struct ATekStrider_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TTKM[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.print string manual
	 */
	struct ATekStrider_Character_BP_C_printstringmanual_Params
	{
	public:
		class FString                                              String;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPNotifyClearRider
	 */
	struct ATekStrider_Character_BP_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPNotifySetRider
	 */
	struct ATekStrider_Character_BP_C_BPNotifySetRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderSetting;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Get Charge Capacity
	 */
	struct ATekStrider_Character_BP_C_GetChargeCapacity_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.toggle transmitter vfx
	 */
	struct ATekStrider_Character_BP_C_toggletransmittervfx_Params
	{
	public:
		bool                                                       Activate;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HY2U[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     timeactivated;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.update tame percent on material
	 */
	struct ATekStrider_Character_BP_C_updatetamepercentonmaterial_Params
	{
	public:
		float                                                      Percent;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.set up dynamic mats
	 */
	struct ATekStrider_Character_BP_C_setupdynamicmats_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Focus Suck Location at Target
	 */
	struct ATekStrider_Character_BP_C_FocusSuckLocationatTarget_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPHandlePoop
	 */
	struct ATekStrider_Character_BP_C_BPHandlePoop_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FGIJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPPreventFirstPerson
	 */
	struct ATekStrider_Character_BP_C_BPPreventFirstPerson_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPPreventInputType
	 */
	struct ATekStrider_Character_BP_C_BPPreventInputType_Params
	{
	public:
		EPrimalCharacterInputType                                  inputType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPOverrideHurtAnim
	 */
	struct ATekStrider_Character_BP_C_BPOverrideHurtAnim_Params
	{
	public:
		float                                                      DamageTaken;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WJIS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0008(0x0020)  (Parm, OutParm, ReferenceParm)
		class APawn*                                               PawnInstigator;                                          // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsLocalPath;                                            // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0039(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZOZC[0x2];                                   // 0x003A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             PointDamageLocation;                                     // 0x003C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             PointDamageHitNormal;                                    // 0x0048(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XP8Q[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimMontage*                                        ReturnValue;                                             // 0x0058(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPAdjustDamage
	 */
	struct ATekStrider_Character_BP_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AJ0T[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UF8O[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPOnLethalDamage
	 */
	struct ATekStrider_Character_BP_C_BPOnLethalDamage_Params
	{
	public:
		float                                                      KillingDamage;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ES15[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0008(0x0020)  (Parm, OutParm, ReferenceParm)
		class AController*                                         Killer;                                                  // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bPreventDeath;                                           // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Reset Blend Time After Timer
	 */
	struct ATekStrider_Character_BP_C_ResetBlendTimeAfterTimer_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.set blend time
	 */
	struct ATekStrider_Character_BP_C_setblendtime_Params
	{
	public:
		float                                                      InputPin;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 */
	struct ATekStrider_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.tick events
	 */
	struct ATekStrider_Character_BP_C_tickevents_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.BP_GetCustomModifier_MaxSpeed
	 */
	struct ATekStrider_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Detect Double Tap Right Click
	 */
	struct ATekStrider_Character_BP_C_DetectDoubleTapRightClick_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Detect Double Tap Crouch
	 */
	struct ATekStrider_Character_BP_C_DetectDoubleTapCrouch_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Get Current Inventory Mutagel Count
	 */
	struct ATekStrider_Character_BP_C_GetCurrentInventoryMutagelCount_Params
	{
	public:
		class UObject*                                             PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    currentamount;                                           // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Get Required Mutagel Count
	 */
	struct ATekStrider_Character_BP_C_GetRequiredMutagelCount_Params
	{
	public:
		int32_t                                                    neededamount;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Use Mutagel And Begin Hacking
	 */
	struct ATekStrider_Character_BP_C_UseMutagelAndBeginHacking_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.completed enough missions
	 */
	struct ATekStrider_Character_BP_C_completedenoughmissions_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.backup timer has expired to bypass the wander distance if needed
	 */
	struct ATekStrider_Character_BP_C_backuptimerhasexpiredtobypassthewanderdistanceifneeded_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_94J1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.has wandered far enough to be able to hack again
	 */
	struct ATekStrider_Character_BP_C_haswanderedfarenoughtobeabletohackagain_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FES2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      remainingdistance;                                       // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Is Able To Initiate A Hack Attempt
	 */
	struct ATekStrider_Character_BP_C_IsAbleToInitiateAHackAttempt_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Has Mutagel Ready
	 */
	struct ATekStrider_Character_BP_C_HasMutagelReady_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Has Required Mutagel
	 */
	struct ATekStrider_Character_BP_C_HasRequiredMutagel_Params
	{
	public:
		class UObject*                                             PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_22U6[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    MutagelPlayerHas;                                        // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    MutagelRequired;                                         // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.spawn targeted hacking particle
	 */
	struct ATekStrider_Character_BP_C_spawntargetedhackingparticle_Params
	{
	public:
		struct FVector                                             hackingloc;                                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_V5JM[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             Player;                                                  // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Detect If Able To Be Hacked- For blinking lights only
	 */
	struct ATekStrider_Character_BP_C_DetectIfAbleToBeHackedForblinkinglightsonly_Params
	{
	public:
		bool                                                       canhack;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       shouldbevisible;                                         // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.
	 */
	struct ATekStrider_Character_BP_C__Params
	{
	public:
		float                                                      _1;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      _2;                                                      // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Result;                                                  // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.advance hacking point
	 */
	struct ATekStrider_Character_BP_C_advancehackingpoint_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.set up hacking interaction points
	 */
	struct ATekStrider_Character_BP_C_setuphackinginteractionpoints_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.BP_GetCustomModifier_RotationRate
	 */
	struct ATekStrider_Character_BP_C_BP_GetCustomModifier_RotationRate_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Is Looking At Specific Hack Interaction Point
	 */
	struct ATekStrider_Character_BP_C_IsLookingAtSpecificHackInteractionPoint_Params
	{
	public:
		class AShooterCharacter*                                   Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsLookingat;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W7BE[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             HackInteractionSpotWorldLoc;                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.activate current Hack Interaction Spot
	 */
	struct ATekStrider_Character_BP_C_activatecurrentHackInteractionSpot_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.ReceiveTick
	 */
	struct ATekStrider_Character_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPOverrideFloatingHUDLocation
	 */
	struct ATekStrider_Character_BP_C_BPOverrideFloatingHUDLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Throttled Request Mission Count
	 */
	struct ATekStrider_Character_BP_C_ThrottledRequestMissionCount_Params
	{
	public:
		class AShooterCharacter*                                   Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPDinoTooltipCustomTamingProgressBar
	 */
	struct ATekStrider_Character_BP_C_BPDinoTooltipCustomTamingProgressBar_Params
	{
	public:
		bool                                                       overrideTamingProgressBarIfActive;                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S08O[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      progressPercent;                                         // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              Label;                                                   // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.on hacking hit success
	 */
	struct ATekStrider_Character_BP_C_onhackinghitsuccess_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.on hacking hit fail
	 */
	struct ATekStrider_Character_BP_C_onhackinghitfail_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.ReceiveAnyDamage
	 */
	struct ATekStrider_Character_BP_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SJEE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.hacking success
	 */
	struct ATekStrider_Character_BP_C_hackingsuccess_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Sync Mission Complete Status
	 */
	struct ATekStrider_Character_BP_C_SyncMissionCompleteStatus_Params
	{
	public:
		class AShooterCharacter*                                   Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Restrict Sync Mission Complete Status
	 */
	struct ATekStrider_Character_BP_C_RestrictSyncMissionCompleteStatus_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPNotifyToggleHUD
	 */
	struct ATekStrider_Character_BP_C_BPNotifyToggleHUD_Params
	{
	public:
		bool                                                       bHudHidden;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NUYV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.On Passenger Weapon Changed
	 */
	struct ATekStrider_Character_BP_C_OnPassengerWeaponChanged_Params
	{
	public:
		class AShooterWeapon*                                      newWeapon;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPNotifyAddPassenger
	 */
	struct ATekStrider_Character_BP_C_BPNotifyAddPassenger_Params
	{
	public:
		class APrimalCharacter*                                    PassengerChar;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    SeatIndex;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NDKU[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPNotifyClearPassenger
	 */
	struct ATekStrider_Character_BP_C_BPNotifyClearPassenger_Params
	{
	public:
		class APrimalCharacter*                                    PassengerChar;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    SeatIndex;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ILBD[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.BP_OnBasedPawnRemovedNotify
	 */
	struct ATekStrider_Character_BP_C_BP_OnBasedPawnRemovedNotify_Params
	{
	public:
		class AActor*                                              RemovedActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPOverrideGetAttackAnimationIndex
	 */
	struct ATekStrider_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HNO9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UAnimMontage*>                                AnimationArray;                                          // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Spawn Tek Transmitter
	 */
	struct ATekStrider_Character_BP_C_SpawnTekTransmitter_Params
	{
	public:
		struct FVector                                             NewParam;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            NewParam1;                                               // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPClientDoMultiUse
	 */
	struct ATekStrider_Character_BP_C_BPClientDoMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ClientUseIndex;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPTryMultiUse
	 */
	struct ATekStrider_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPGetMultiUseEntries
	 */
	struct ATekStrider_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Spawn Bed
	 */
	struct ATekStrider_Character_BP_C_SpawnBed_Params
	{
	public:
		struct FVector                                             NewParam;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            NewParam1;                                               // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPServerHandleNetExecCommand
	 */
	struct ATekStrider_Character_BP_C_BPServerHandleNetExecCommand_Params
	{
	public:
		class APlayerController*                                   FromPC;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                CommandName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0010(0x0040)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.InterceptInputEvent
	 */
	struct ATekStrider_Character_BP_C_InterceptInputEvent_Params
	{
	public:
		class FString                                              InputName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.spawn platform saddle
	 */
	struct ATekStrider_Character_BP_C_spawnplatformsaddle_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Spawn Attachments
	 */
	struct ATekStrider_Character_BP_C_SpawnAttachments_Params
	{
	public:
		int32_t                                                    ManuallySetHead;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ManuallySetChest;                                        // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Reset Moveright
	 */
	struct ATekStrider_Character_BP_C_ResetMoveright_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Reset Moveforward
	 */
	struct ATekStrider_Character_BP_C_ResetMoveforward_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.BP_InterceptMoveForward
	 */
	struct ATekStrider_Character_BP_C_BP_InterceptMoveForward_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.BP_InterceptMoveRight
	 */
	struct ATekStrider_Character_BP_C_BP_InterceptMoveRight_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPGetHUDElements
	 */
	struct ATekStrider_Character_BP_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPChangedActorTeam
	 */
	struct ATekStrider_Character_BP_C_BPChangedActorTeam_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPTimerNonDedicated
	 */
	struct ATekStrider_Character_BP_C_BPTimerNonDedicated_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.BlueprintDrawFloatingHUD
	 */
	struct ATekStrider_Character_BP_C_BlueprintDrawFloatingHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterX;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterY;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DrawScale;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPTimerServer
	 */
	struct ATekStrider_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Update Max Charge
	 */
	struct ATekStrider_Character_BP_C_UpdateMaxCharge_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPNotifyLevelUp
	 */
	struct ATekStrider_Character_BP_C_BPNotifyLevelUp_Params
	{
	public:
		int32_t                                                    ExtraCharacterLevel;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Unstasis Logic
	 */
	struct ATekStrider_Character_BP_C_UnstasisLogic_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPSetupTamed
	 */
	struct ATekStrider_Character_BP_C_BPSetupTamed_Params
	{
	public:
		bool                                                       bWasJustTamed;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.OnRep_bAutoChargeActive
	 */
	struct ATekStrider_Character_BP_C_OnRep_bAutoChargeActive_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Get Actual Radius
	 */
	struct ATekStrider_Character_BP_C_GetActualRadius_Params
	{
	public:
		float                                                      Radius;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Get Passive Charge Gain
	 */
	struct ATekStrider_Character_BP_C_GetPassiveChargeGain_Params
	{
	public:
		float                                                      ChargeGain;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Update Charge Radius
	 */
	struct ATekStrider_Character_BP_C_UpdateChargeRadius_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Auto Charge Notify
	 */
	struct ATekStrider_Character_BP_C_AutoChargeNotify_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Init
	 */
	struct ATekStrider_Character_BP_C_Init_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Initialize Charge Buff
	 */
	struct ATekStrider_Character_BP_C_InitializeChargeBuff_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Create Charge Buff
	 */
	struct ATekStrider_Character_BP_C_CreateChargeBuff_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Destroy Charge Buff
	 */
	struct ATekStrider_Character_BP_C_DestroyChargeBuff_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.On Charge Event
	 */
	struct ATekStrider_Character_BP_C_OnChargeEvent_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Create Charge Manager
	 */
	struct ATekStrider_Character_BP_C_CreateChargeManager_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.GetAttachmentBuffs
	 */
	struct ATekStrider_Character_BP_C_GetAttachmentBuffs_Params
	{
	public:
		TArray<class ABuff_TekStrider_Attachment_Base_C*>          Buffs;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPGetCrosshairAlpha
	 */
	struct ATekStrider_Character_BP_C_BPGetCrosshairAlpha_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_62OL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPDoAttack
	 */
	struct ATekStrider_Character_BP_C_BPDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6L46[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.GetAttachmentBuff
	 */
	struct ATekStrider_Character_BP_C_GetAttachmentBuff_Params
	{
	public:
		EPrimalEquipmentType                                       AttachmentType;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K13B[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABuff_TekStrider_Attachment_Base_C*                  Buff;                                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPNotifyInventoryItemChange
	 */
	struct ATekStrider_Character_BP_C_BPNotifyInventoryItemChange_Params
	{
	public:
		bool                                                       bIsItemAdd;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PCB0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimalItem*                                         theItem;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bEquipItem;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPNotifyStructurePlacedNearby
	 */
	struct ATekStrider_Character_BP_C_BPNotifyStructurePlacedNearby_Params
	{
	public:
		class APrimalStructure*                                    NewStructure;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.UserConstructionScript
	 */
	struct ATekStrider_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Timeline_0__FinishedFunc
	 */
	struct ATekStrider_Character_BP_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Timeline_0__UpdateFunc
	 */
	struct ATekStrider_Character_BP_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Charge Variable Event Boolean MulticastInterface
	 */
	struct ATekStrider_Character_BP_C_ChargeVariableEventBooleanMulticastInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Charge Variable Event Float Multicast Interface
	 */
	struct ATekStrider_Character_BP_C_ChargeVariableEventFloatMulticastInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5ZAG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Charge Variable Event Double MulticastInterface
	 */
	struct ATekStrider_Character_BP_C_ChargeVariableEventDoubleMulticastInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4XD1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Charge Variable Event Boolean Interface
	 */
	struct ATekStrider_Character_BP_C_ChargeVariableEventBooleanInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.ChargeVariableEventFloatInterface
	 */
	struct ATekStrider_Character_BP_C_ChargeVariableEventFloatInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MJXM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.ChargeVariableEventDoubleInterface
	 */
	struct ATekStrider_Character_BP_C_ChargeVariableEventDoubleInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E0JV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.ChargeVariableEventIntInterface
	 */
	struct ATekStrider_Character_BP_C_ChargeVariableEventIntInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H4AP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ivalue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.ChargeVariableEventIntMulticastInterface
	 */
	struct ATekStrider_Character_BP_C_ChargeVariableEventIntMulticastInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HEAF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ivalue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.OnAttachmentBuffAdded
	 */
	struct ATekStrider_Character_BP_C_OnAttachmentBuffAdded_Params
	{
	public:
		class ABuff_TekStrider_Attachment_Base_C*                  Buff;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.OnAttachmentBuffRemoved
	 */
	struct ATekStrider_Character_BP_C_OnAttachmentBuffRemoved_Params
	{
	public:
		class ABuff_TekStrider_Attachment_Base_C*                  Buff;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.BP_OnJumpPressed
	 */
	struct ATekStrider_Character_BP_C_BP_OnJumpPressed_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.SetInventoryTributeStatus
	 */
	struct ATekStrider_Character_BP_C_SetInventoryTributeStatus_Params
	{
	public:
		bool                                                       IsTribute;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPUnstasis
	 */
	struct ATekStrider_Character_BP_C_BPUnstasis_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.ReceiveBeginPlay
	 */
	struct ATekStrider_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.ChargeVariableEvent
	 */
	struct ATekStrider_Character_BP_C_ChargeVariableEvent_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KSTA[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.ChargeVariableEvent_Multicast
	 */
	struct ATekStrider_Character_BP_C_ChargeVariableEvent_Multicast_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SS40[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.CheckForBatteriesAndUpdate_Multicast
	 */
	struct ATekStrider_Character_BP_C_CheckForBatteriesAndUpdate_Multicast_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.OnDied_Event
	 */
	struct ATekStrider_Character_BP_C_OnDied_Event_Params
	{
	public:
		class APrimalCharacter*                                    DiedCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.CreateChargeBuff_Multicast
	 */
	struct ATekStrider_Character_BP_C_CreateChargeBuff_Multicast_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.DestroyChargeBuff_Multicast
	 */
	struct ATekStrider_Character_BP_C_DestroyChargeBuff_Multicast_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Charge Variable Event Interface
	 */
	struct ATekStrider_Character_BP_C_ChargeVariableEventInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K59F[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ivalue;                                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Charge Variable Event Trigger Multicast Interface
	 */
	struct ATekStrider_Character_BP_C_ChargeVariableEventTriggerMulticastInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HIIP[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    iVariable;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Interface Check for Batteries and Update Multicast
	 */
	struct ATekStrider_Character_BP_C_InterfaceCheckforBatteriesandUpdateMulticast_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Set Charge Variable Interface
	 */
	struct ATekStrider_Character_BP_C_SetChargeVariableInterface_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       multicast;                                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_234Q[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       triggerEvent;                                            // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       multicastEvent;                                          // 0x0012(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DQCR[0x1];                                   // 0x0013(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ivalue;                                                  // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.RandomizeUntamedStart
	 */
	struct ATekStrider_Character_BP_C_RandomizeUntamedStart_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.NetUpdateCharge
	 */
	struct ATekStrider_Character_BP_C_NetUpdateCharge_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.BPDinoPostBeginPlay
	 */
	struct ATekStrider_Character_BP_C_BPDinoPostBeginPlay_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.fade in platform
	 */
	struct ATekStrider_Character_BP_C_fadeinplatform_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Multicast Start Taming
	 */
	struct ATekStrider_Character_BP_C_MulticastStartTaming_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.multicast on hack hit success
	 */
	struct ATekStrider_Character_BP_C_multicastonhackhitsuccess_Params
	{
	public:
		struct FVector                                             lasttamelocation;                                        // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.multicast on hack hit fail
	 */
	struct ATekStrider_Character_BP_C_multicastonhackhitfail_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.multicast on hack complete
	 */
	struct ATekStrider_Character_BP_C_multicastonhackcomplete_Params
	{
	public:
		struct FVector                                             lasthackspot;                                            // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.multicast on complete tame
	 */
	struct ATekStrider_Character_BP_C_multicastoncompletetame_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.set strider ref for hacking vfx
	 */
	struct ATekStrider_Character_BP_C_setstriderrefforhackingvfx_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.immediately set platform visible
	 */
	struct ATekStrider_Character_BP_C_immediatelysetplatformvisible_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.MultiOnStriderDestroyed
	 */
	struct ATekStrider_Character_BP_C_MultiOnStriderDestroyed_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.EnableInputMulti
	 */
	struct ATekStrider_Character_BP_C_EnableInputMulti_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.GetReadyToDieMulti
	 */
	struct ATekStrider_Character_BP_C_GetReadyToDieMulti_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.GetReadyToDieSkip
	 */
	struct ATekStrider_Character_BP_C_GetReadyToDieSkip_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.multicast play resource suck vfx on rocks
	 */
	struct ATekStrider_Character_BP_C_multicastplayresourcesuckvfxonrocks_Params
	{
	public:
		struct FVector                                             Loc;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.multicast play resource suck vfx on trees
	 */
	struct ATekStrider_Character_BP_C_multicastplayresourcesuckvfxontrees_Params
	{
	public:
		struct FVector                                             Loc;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.multicast update tame percent on body
	 */
	struct ATekStrider_Character_BP_C_multicastupdatetamepercentonbody_Params
	{
	public:
		float                                                      Percent;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.multicast activate transmitter vfx
	 */
	struct ATekStrider_Character_BP_C_multicastactivatetransmittervfx_Params
	{
	public:
		double                                                     timeactivated;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.multicast deactivate transmitter vfx
	 */
	struct ATekStrider_Character_BP_C_multicastdeactivatetransmittervfx_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.SetupEventBindingsForDediStorage
	 */
	struct ATekStrider_Character_BP_C_SetupEventBindingsForDediStorage_Params
	{
	public:
		class ABP_DedicatedStorage_C*                              ForStorage;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBind;                                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.OnLinkedDediStorageDestroyed
	 */
	struct ATekStrider_Character_BP_C_OnLinkedDediStorageDestroyed_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Multi_RefreshLinkedDediStorageRef
	 */
	struct ATekStrider_Character_BP_C_Multi_RefreshLinkedDediStorageRef_Params
	{
	public:
		class ABP_DedicatedStorage_C*                              LinkedStorage;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.Server_RequestFixLinkedDediStorageRef
	 */
	struct ATekStrider_Character_BP_C_Server_RequestFixLinkedDediStorageRef_Params
	{	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.OnActorCustomEvent_Event
	 */
	struct ATekStrider_Character_BP_C_OnActorCustomEvent_Event_Params
	{
	public:
		class FName                                                EventCustomName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              EventCustomString;                                       // 0x0008(0x0010)  (Parm, ZeroConstructor)
		class AActor*                                              InstigatorActor;                                         // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.ExecuteUbergraph_TekStrider_Character_BP
	 */
	struct ATekStrider_Character_BP_C_ExecuteUbergraph_TekStrider_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekStrider_Character_BP.TekStrider_Character_BP_C.OnStructurePlacedOnSaddle__DelegateSignature
	 */
	struct ATekStrider_Character_BP_C_OnStructurePlacedOnSaddle__DelegateSignature_Params
	{
	public:
		class APrimalStructure*                                    Structure;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
