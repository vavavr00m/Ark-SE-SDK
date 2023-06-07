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
	 * Function DroppedItem_GachaPod.DroppedItem_GachaPod_C.UpdateItemName
	 */
	struct ADroppedItem_GachaPod_C_UpdateItemName_Params
	{	};

	/**
	 * Function DroppedItem_GachaPod.DroppedItem_GachaPod_C.ReceiveHit
	 */
	struct ADroppedItem_GachaPod_C_ReceiveHit_Params
	{
	public:
		class UPrimitiveComponent*                                 MyComp;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              Other;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSelfMoved;                                              // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I4LK[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             HitLocation;                                             // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             HitNormal;                                               // 0x0028(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NormalImpulse;                                           // 0x0034(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          Hit;                                                     // 0x0040(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function DroppedItem_GachaPod.DroppedItem_GachaPod_C.OnRep_ItemQuality
	 */
	struct ADroppedItem_GachaPod_C_OnRep_ItemQuality_Params
	{	};

	/**
	 * Function DroppedItem_GachaPod.DroppedItem_GachaPod_C.ReceiveBeginPlay
	 */
	struct ADroppedItem_GachaPod_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function DroppedItem_GachaPod.DroppedItem_GachaPod_C.CheckForItem
	 */
	struct ADroppedItem_GachaPod_C_CheckForItem_Params
	{	};

	/**
	 * Function DroppedItem_GachaPod.DroppedItem_GachaPod_C.ActivateFX
	 */
	struct ADroppedItem_GachaPod_C_ActivateFX_Params
	{	};

	/**
	 * Function DroppedItem_GachaPod.DroppedItem_GachaPod_C.UserConstructionScript
	 */
	struct ADroppedItem_GachaPod_C_UserConstructionScript_Params
	{	};

	/**
	 * Function DroppedItem_GachaPod.DroppedItem_GachaPod_C.ColorShift
	 */
	struct ADroppedItem_GachaPod_C_ColorShift_Params
	{	};

	/**
	 * Function DroppedItem_GachaPod.DroppedItem_GachaPod_C.ExecuteUbergraph_DroppedItem_GachaPod
	 */
	struct ADroppedItem_GachaPod_C_ExecuteUbergraph_DroppedItem_GachaPod_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
