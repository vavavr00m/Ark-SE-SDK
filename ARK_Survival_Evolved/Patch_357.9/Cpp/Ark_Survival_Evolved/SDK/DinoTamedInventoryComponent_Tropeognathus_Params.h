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
	 * Function DinoTamedInventoryComponent_Tropeognathus.DinoTamedInventoryComponent_Tropeognathus_C.BPRemoteInventoryAllowViewing
	 */
	struct UDinoTamedInventoryComponent_Tropeognathus_C_BPRemoteInventoryAllowViewing_Params
	{
	public:
		class AShooterPlayerController*                            PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8NB9[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DinoTamedInventoryComponent_Tropeognathus.DinoTamedInventoryComponent_Tropeognathus_C.CanGrindItems
	 */
	struct UDinoTamedInventoryComponent_Tropeognathus_C_CanGrindItems_Params
	{
	public:
		class AShooterPlayerController*                            PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G2B8[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DinoTamedInventoryComponent_Tropeognathus.DinoTamedInventoryComponent_Tropeognathus_C.CanGrindItem
	 */
	struct UDinoTamedInventoryComponent_Tropeognathus_C_CanGrindItem_Params
	{
	public:
		class UPrimalItem*                                         Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MTY1[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DinoTamedInventoryComponent_Tropeognathus.DinoTamedInventoryComponent_Tropeognathus_C.ExecuteUbergraph_DinoTamedInventoryComponent_Tropeognathus
	 */
	struct UDinoTamedInventoryComponent_Tropeognathus_C_ExecuteUbergraph_DinoTamedInventoryComponent_Tropeognathus_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
