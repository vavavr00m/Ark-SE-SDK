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
	 * Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Try To Add  Resource from first trace
	 */
	struct ABuff_TekStrider_Harvester_C_TryToAddResourcefromfirsttrace_Params
	{
	public:
		class UPrimitiveComponent*                                 hitcomponent;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FOverlappedFoliageElement>                   Resources;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		struct FVector                                             impactpoint;                                             // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.clamp angle
	 */
	struct ABuff_TekStrider_Harvester_C_clampangle_Params
	{
	public:
		struct FVector                                             A;                                                       // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      InputPin;                                                // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Deactivate Firing Vfx
	 */
	struct ABuff_TekStrider_Harvester_C_DeactivateFiringVfx_Params
	{	};

	/**
	 * Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.BuffTickServer
	 */
	struct ABuff_TekStrider_Harvester_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.BPGetHUDElements
	 */
	struct ABuff_TekStrider_Harvester_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.CanActivateHarvester
	 */
	struct ABuff_TekStrider_Harvester_C_CanActivateHarvester_Params
	{
	public:
		bool                                                       checkspecialconditionsfordebugging;                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bResult;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QINJ[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.GetOwnerStriderLinkedDediStorageSelectedItemClass
	 */
	struct ABuff_TekStrider_Harvester_C_GetOwnerStriderLinkedDediStorageSelectedItemClass_Params
	{
	public:
		bool                                                       bIsValid;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5PF4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              ItemClass;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.ShouldHarvestFoliage
	 */
	struct ABuff_TekStrider_Harvester_C_ShouldHarvestFoliage_Params
	{
	public:
		struct FOverlappedFoliageElement                           CheckFoliage;                                            // 0x0000(0x0038)  (Parm)
		struct FVector                                             overrideharvestloc;                                      // 0x0038(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bResult;                                                 // 0x0044(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SQHB[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.BPClientDoMultiUse
	 */
	struct ABuff_TekStrider_Harvester_C_BPClientDoMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ClientUseIndex;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Cannot Fire Timer
	 */
	struct ABuff_TekStrider_Harvester_C_CannotFireTimer_Params
	{	};

	/**
	 * Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.BPGetMultiUseEntries
	 */
	struct ABuff_TekStrider_Harvester_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.add found foliage
	 */
	struct ABuff_TekStrider_Harvester_C_addfoundfoliage_Params
	{
	public:
		TArray<struct FOverlappedFoliageElement>                   Array;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.spawn targeting vfx
	 */
	struct ABuff_TekStrider_Harvester_C_spawntargetingvfx_Params
	{
	public:
		TArray<struct FVector>                                     InputPin;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Pass In Foliage Limit
	 */
	struct ABuff_TekStrider_Harvester_C_PassInFoliageLimit_Params
	{	};

	/**
	 * Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Is Firing Clientside
	 */
	struct ABuff_TekStrider_Harvester_C_IsFiringClientside_Params
	{	};

	/**
	 * Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Restriction on Passing Foliage to Server
	 */
	struct ABuff_TekStrider_Harvester_C_RestrictiononPassingFoliagetoServer_Params
	{	};

	/**
	 * Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Delay Disable Independant Impact Mining Vfx 2
	 */
	struct ABuff_TekStrider_Harvester_C_DelayDisableIndependantImpactMiningVfx2_Params
	{	};

	/**
	 * Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.clamp aiming angle
	 */
	struct ABuff_TekStrider_Harvester_C_clampaimingangle_Params
	{
	public:
		struct FVector                                             inVec;                                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.set aim indicator direction
	 */
	struct ABuff_TekStrider_Harvester_C_setaimindicatordirection_Params
	{	};

	/**
	 * Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Restrict Too Frequent Calls to Show Gather Vfx
	 */
	struct ABuff_TekStrider_Harvester_C_RestrictTooFrequentCallstoShowGatherVfx_Params
	{	};

	/**
	 * Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Is Firing
	 */
	struct ABuff_TekStrider_Harvester_C_IsFiring_Params
	{	};

	/**
	 * Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.ReceiveBeginPlay
	 */
	struct ABuff_TekStrider_Harvester_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Delay Disable Independant Impact Mining Vfx
	 */
	struct ABuff_TekStrider_Harvester_C_DelayDisableIndependantImpactMiningVfx_Params
	{	};

	/**
	 * Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Trigger
	 */
	struct ABuff_TekStrider_Harvester_C_Trigger_Params
	{	};

	/**
	 * Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Get Beam Origin and End
	 */
	struct ABuff_TekStrider_Harvester_C_GetBeamOriginandEnd_Params
	{
	public:
		struct FVector                                             Origin;                                                  // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             End;                                                     // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.GetBeamImpact
	 */
	struct ABuff_TekStrider_Harvester_C_GetBeamImpact_Params
	{
	public:
		struct FVector                                             BeamStart;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             BeamEnd;                                                 // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             BeamImpact;                                              // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HitSomething;                                            // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JAO0[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.IsAIControlled?
	 */
	struct ABuff_TekStrider_Harvester_C_IsAIControlled_Params
	{
	public:
		bool                                                       IsAI;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XU8U[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Update Beam Impact Location
	 */
	struct ABuff_TekStrider_Harvester_C_UpdateBeamImpactLocation_Params
	{	};

	/**
	 * Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.BPSetupForInstigator
	 */
	struct ABuff_TekStrider_Harvester_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.BuffTickClient
	 */
	struct ABuff_TekStrider_Harvester_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Buff Tick Server Logic
	 */
	struct ABuff_TekStrider_Harvester_C_BuffTickServerLogic_Params
	{	};

	/**
	 * Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Visual Beam Origin
	 */
	struct ABuff_TekStrider_Harvester_C_VisualBeamOrigin_Params
	{	};

	/**
	 * Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.UserConstructionScript
	 */
	struct ABuff_TekStrider_Harvester_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Multicast_ActivateBeam
	 */
	struct ABuff_TekStrider_Harvester_C_Multicast_ActivateBeam_Params
	{	};

	/**
	 * Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Multicast_DeactivateBeam
	 */
	struct ABuff_TekStrider_Harvester_C_Multicast_DeactivateBeam_Params
	{	};

	/**
	 * Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.ValidatePlayerBeamOnServer
	 */
	struct ABuff_TekStrider_Harvester_C_ValidatePlayerBeamOnServer_Params
	{
	public:
		struct FVector                                             ImpactPoint;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Multicast_UpdateBeamImpactLocation
	 */
	struct ABuff_TekStrider_Harvester_C_Multicast_UpdateBeamImpactLocation_Params
	{
	public:
		struct FVector                                             BeamImpactLocation;                                      // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Multicast_Pass_Multiple_Impact_Locations
	 */
	struct ABuff_TekStrider_Harvester_C_Multicast_Pass_Multiple_Impact_Locations_Params
	{
	public:
		TArray<struct FVector>                                     impactlocations;                                         // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       containedrocks;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.multicast begin charging shot
	 */
	struct ABuff_TekStrider_Harvester_C_multicastbeginchargingshot_Params
	{	};

	/**
	 * Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.InventoryItemAdded__DelegateSignature_Event
	 */
	struct ABuff_TekStrider_Harvester_C_InventoryItemAdded__DelegateSignature_Event_Params
	{
	public:
		class UPrimalInventoryComponent*                           inventory;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimalItem*                                         Item;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    AmountAdded;                                             // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bEquippedItem;                                           // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.bind item added
	 */
	struct ABuff_TekStrider_Harvester_C_binditemadded_Params
	{	};

	/**
	 * Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.unbind item added
	 */
	struct ABuff_TekStrider_Harvester_C_unbinditemadded_Params
	{	};

	/**
	 * Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.Multicast_Charge_Upcoming_Zaps
	 */
	struct ABuff_TekStrider_Harvester_C_Multicast_Charge_Upcoming_Zaps_Params
	{
	public:
		TArray<struct FVector>                                     impactlocations;                                         // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       containedrocks;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.passed-in foliage
	 */
	struct ABuff_TekStrider_Harvester_C_passedinfoliage_Params
	{
	public:
		TArray<struct FOverlappedFoliageElement>                   Foliage;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function Buff_TekStrider_Harvester.Buff_TekStrider_Harvester_C.ExecuteUbergraph_Buff_TekStrider_Harvester
	 */
	struct ABuff_TekStrider_Harvester_C_ExecuteUbergraph_Buff_TekStrider_Harvester_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
