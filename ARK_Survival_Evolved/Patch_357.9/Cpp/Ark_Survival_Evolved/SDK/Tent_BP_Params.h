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
	 * Function Tent_BP.Tent_BP_C.UseFullPickup
	 */
	struct ATent_BP_C_UseFullPickup_Params
	{
	public:
		class APrimalStructure*                                    StructToPickUp;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UseFull;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X99K[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Tent_BP.Tent_BP_C.BPAllowPickupGiveItem
	 */
	struct ATent_BP_C_BPAllowPickupGiveItem_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tent_BP.Tent_BP_C.BPPreventUsingAsFloorForStructure
	 */
	struct ATent_BP_C_BPPreventUsingAsFloorForStructure_Params
	{
	public:
		struct FPlacementData                                      theOutPlacementData;                                     // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
		class APrimalStructure*                                    StructureToPlaceOnMe;                                    // 0x0060(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ISQL[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Tent_BP.Tent_BP_C.GiveChildStructuresToInventory
	 */
	struct ATent_BP_C_GiveChildStructuresToInventory_Params
	{
	public:
		class UPrimalInventoryComponent*                           ToInv;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tent_BP.Tent_BP_C.GiveFloorStructures
	 */
	struct ATent_BP_C_GiveFloorStructures_Params
	{	};

	/**
	 * Function Tent_BP.Tent_BP_C.ReceiveEndPlay
	 */
	struct ATent_BP_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tent_BP.Tent_BP_C.UserConstructionScript
	 */
	struct ATent_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Tent_BP.Tent_BP_C.ReceiveBeginPlay
	 */
	struct ATent_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Tent_BP.Tent_BP_C.PeriodicDamage
	 */
	struct ATent_BP_C_PeriodicDamage_Params
	{	};

	/**
	 * Function Tent_BP.Tent_BP_C.BPApplyCustomDurabilityOnPickup
	 */
	struct ATent_BP_C_BPApplyCustomDurabilityOnPickup_Params
	{
	public:
		class UPrimalItem*                                         PickedUp;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tent_BP.Tent_BP_C.ExecuteUbergraph_Tent_BP
	 */
	struct ATent_BP_C_ExecuteUbergraph_Tent_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
