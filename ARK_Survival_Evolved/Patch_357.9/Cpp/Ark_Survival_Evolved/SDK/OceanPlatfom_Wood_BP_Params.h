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
	 * Function OceanPlatfom_Wood_BP.OceanPlatfom_Wood_BP_C.BPOnDemolish
	 */
	struct AOceanPlatfom_Wood_BP_C_BPOnDemolish_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OceanPlatfom_Wood_BP.OceanPlatfom_Wood_BP_C.BPOnStructurePickup
	 */
	struct AOceanPlatfom_Wood_BP_C_BPOnStructurePickup_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              ItemType;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimalItem*                                         NewlyPickedUpItem;                                       // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsQuickPickup;                                          // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8GGV[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function OceanPlatfom_Wood_BP.OceanPlatfom_Wood_BP_C.BPPlacedStructure
	 */
	struct AOceanPlatfom_Wood_BP_C_BPPlacedStructure_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OceanPlatfom_Wood_BP.OceanPlatfom_Wood_BP_C.BPOverrideSnappedFromTransform
	 */
	struct AOceanPlatfom_Wood_BP_C_BPOverrideSnappedFromTransform_Params
	{
	public:
		class APrimalStructure*                                    ParentStructure;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ParentSnapFromIndex;                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                ParentSnapFromName;                                      // 0x000C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             UnsnappedPlacementPos;                                   // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            UnsnappedPlacementRot;                                   // 0x0020(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             SnappedPlacementPos;                                     // 0x002C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            SnappedPlacementRot;                                     // 0x0038(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    SnapToIndex;                                             // 0x0044(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                SnapToName;                                              // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             OutLocation;                                             // 0x0050(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            OutRotation;                                             // 0x005C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    bForceInvalidateSnap;                                    // 0x0068(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x006C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O6WK[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function OceanPlatfom_Wood_BP.OceanPlatfom_Wood_BP_C.BPOverrideSnappedToTransform
	 */
	struct AOceanPlatfom_Wood_BP_C_BPOverrideSnappedToTransform_Params
	{
	public:
		class APrimalStructure*                                    childStructure;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ChildSnapFromIndex;                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                ChildSnapFromName;                                       // 0x000C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             UnsnappedPlacementPos;                                   // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            UnsnappedPlacementRot;                                   // 0x0020(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             SnappedPlacementPos;                                     // 0x002C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            SnappedPlacementRot;                                     // 0x0038(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    SnapToIndex;                                             // 0x0044(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                SnapToName;                                              // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             OutLocation;                                             // 0x0050(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            OutRotation;                                             // 0x005C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    bForceInvalidateSnap;                                    // 0x0068(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x006C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y8TX[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function OceanPlatfom_Wood_BP.OceanPlatfom_Wood_BP_C.UserConstructionScript
	 */
	struct AOceanPlatfom_Wood_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function OceanPlatfom_Wood_BP.OceanPlatfom_Wood_BP_C.ReceiveBeginPlay
	 */
	struct AOceanPlatfom_Wood_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function OceanPlatfom_Wood_BP.OceanPlatfom_Wood_BP_C.ExecuteUbergraph_OceanPlatfom_Wood_BP
	 */
	struct AOceanPlatfom_Wood_BP_C_ExecuteUbergraph_OceanPlatfom_Wood_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
