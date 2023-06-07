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
	 * Function StorageBox_ChristmasGift.StorageBox_ChristmasGift_C.BPOverrideDemolish
	 */
	struct AStorageBox_ChristmasGift_C_BPOverrideDemolish_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4BUC[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function StorageBox_ChristmasGift.StorageBox_ChristmasGift_C.BPOverrideAllowStructureAccess
	 */
	struct AStorageBox_ChristmasGift_C_BPOverrideAllowStructureAccess_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsAccessAllowed;                                        // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForInventoryOnly;                                       // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000A(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UA24[0x1];                                   // 0x000B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function StorageBox_ChristmasGift.StorageBox_ChristmasGift_C.UserConstructionScript
	 */
	struct AStorageBox_ChristmasGift_C_UserConstructionScript_Params
	{	};

	/**
	 * Function StorageBox_ChristmasGift.StorageBox_ChristmasGift_C.ReceiveBeginPlay
	 */
	struct AStorageBox_ChristmasGift_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function StorageBox_ChristmasGift.StorageBox_ChristmasGift_C.ExecuteUbergraph_StorageBox_ChristmasGift
	 */
	struct AStorageBox_ChristmasGift_C_ExecuteUbergraph_StorageBox_ChristmasGift_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
