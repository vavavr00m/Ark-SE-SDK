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
	 * Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.create material on mining drill
	 */
	struct ABuff_TekStriderSaddle_Resource_Attract_C_creatematerialonminingdrill_Params
	{	};

	/**
	 * Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.ReceiveBeginPlay
	 */
	struct ABuff_TekStriderSaddle_Resource_Attract_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.Start Gather VFX
	 */
	struct ABuff_TekStriderSaddle_Resource_Attract_C_StartGatherVFX_Params
	{	};

	/**
	 * Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.Has Stopped Gathering Resources
	 */
	struct ABuff_TekStriderSaddle_Resource_Attract_C_HasStoppedGatheringResources_Params
	{	};

	/**
	 * Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.BuffTickClient
	 */
	struct ABuff_TekStriderSaddle_Resource_Attract_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.BuffTickServer
	 */
	struct ABuff_TekStriderSaddle_Resource_Attract_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.UserConstructionScript
	 */
	struct ABuff_TekStriderSaddle_Resource_Attract_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.InventoryItemAdded__DelegateSignature_Event
	 */
	struct ABuff_TekStriderSaddle_Resource_Attract_C_InventoryItemAdded__DelegateSignature_Event_Params
	{
	public:
		class UPrimalInventoryComponent*                           inventory;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimalItem*                                         Item;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    AmountAdded;                                             // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bEquippedItem;                                           // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.bind item added
	 */
	struct ABuff_TekStriderSaddle_Resource_Attract_C_binditemadded_Params
	{	};

	/**
	 * Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.set strider ref
	 */
	struct ABuff_TekStriderSaddle_Resource_Attract_C_setstriderref_Params
	{
	public:
		class AActor*                                              striderref;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.set strider ref on clients
	 */
	struct ABuff_TekStriderSaddle_Resource_Attract_C_setstriderrefonclients_Params
	{
	public:
		class AActor*                                              strider;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.ExecuteUbergraph_Buff_TekStriderSaddle_Resource_Attract
	 */
	struct ABuff_TekStriderSaddle_Resource_Attract_C_ExecuteUbergraph_Buff_TekStriderSaddle_Resource_Attract_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
