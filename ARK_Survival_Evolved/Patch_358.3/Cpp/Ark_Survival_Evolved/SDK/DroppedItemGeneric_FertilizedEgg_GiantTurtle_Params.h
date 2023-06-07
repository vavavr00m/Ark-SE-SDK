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
	 * Function DroppedItemGeneric_FertilizedEgg_GiantTurtle.DroppedItemGeneric_FertilizedEgg_GiantTurtle_C.ReceiveBeginPlay
	 */
	struct ADroppedItemGeneric_FertilizedEgg_GiantTurtle_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function DroppedItemGeneric_FertilizedEgg_GiantTurtle.DroppedItemGeneric_FertilizedEgg_GiantTurtle_C.UpdateAllowIncubation
	 */
	struct ADroppedItemGeneric_FertilizedEgg_GiantTurtle_C_UpdateAllowIncubation_Params
	{	};

	/**
	 * Function DroppedItemGeneric_FertilizedEgg_GiantTurtle.DroppedItemGeneric_FertilizedEgg_GiantTurtle_C.GetDefaultEggValues
	 */
	struct ADroppedItemGeneric_FertilizedEgg_GiantTurtle_C_GetDefaultEggValues_Params
	{
	public:
		float                                                      DefaultEggDurabilityLoss;                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DefaultEggMinTemp;                                       // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DefaultEggMaxTemp;                                       // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EOOC[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DroppedItemGeneric_FertilizedEgg_GiantTurtle.DroppedItemGeneric_FertilizedEgg_GiantTurtle_C.OnRep_AllowIncubation
	 */
	struct ADroppedItemGeneric_FertilizedEgg_GiantTurtle_C_OnRep_AllowIncubation_Params
	{	};

	/**
	 * Function DroppedItemGeneric_FertilizedEgg_GiantTurtle.DroppedItemGeneric_FertilizedEgg_GiantTurtle_C.GetAllowIncubation
	 */
	struct ADroppedItemGeneric_FertilizedEgg_GiantTurtle_C_GetAllowIncubation_Params
	{
	public:
		bool                                                       Allow;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_20B7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DroppedItemGeneric_FertilizedEgg_GiantTurtle.DroppedItemGeneric_FertilizedEgg_GiantTurtle_C.ThrottledTick
	 */
	struct ADroppedItemGeneric_FertilizedEgg_GiantTurtle_C_ThrottledTick_Params
	{	};

	/**
	 * Function DroppedItemGeneric_FertilizedEgg_GiantTurtle.DroppedItemGeneric_FertilizedEgg_GiantTurtle_C.UserConstructionScript
	 */
	struct ADroppedItemGeneric_FertilizedEgg_GiantTurtle_C_UserConstructionScript_Params
	{	};

	/**
	 * Function DroppedItemGeneric_FertilizedEgg_GiantTurtle.DroppedItemGeneric_FertilizedEgg_GiantTurtle_C.ExecuteUbergraph_DroppedItemGeneric_FertilizedEgg_GiantTurtle
	 */
	struct ADroppedItemGeneric_FertilizedEgg_GiantTurtle_C_ExecuteUbergraph_DroppedItemGeneric_FertilizedEgg_GiantTurtle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
