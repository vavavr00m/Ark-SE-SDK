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
	 * Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.ThrottledTick
	 */
	struct AOceanPlatform_Base_BP_C_ThrottledTick_Params
	{	};

	/**
	 * Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.BPOnDemolish
	 */
	struct AOceanPlatform_Base_BP_C_BPOnDemolish_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.SetRetract Ladders
	 */
	struct AOceanPlatform_Base_BP_C_SetRetractLadders_Params
	{
	public:
		bool                                                       Retract;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LE40[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.UpdateLadderHeight
	 */
	struct AOceanPlatform_Base_BP_C_UpdateLadderHeight_Params
	{	};

	/**
	 * Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.BuildLadders
	 */
	struct AOceanPlatform_Base_BP_C_BuildLadders_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UpdateHeight;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E85G[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.BPPlacedStructure
	 */
	struct AOceanPlatform_Base_BP_C_BPPlacedStructure_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.SelfDamage
	 */
	struct AOceanPlatform_Base_BP_C_SelfDamage_Params
	{	};

	/**
	 * Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.ReceiveBeginPlay
	 */
	struct AOceanPlatform_Base_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.BPIsAllowedToBuild
	 */
	struct AOceanPlatform_Base_BP_C_BPIsAllowedToBuild_Params
	{
	public:
		struct FPlacementData                                      OutPlacementData;                                        // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
		int32_t                                                    CurrentAllowedReason;                                    // 0x0060(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ReturnValue;                                             // 0x0064(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.UserConstructionScript
	 */
	struct AOceanPlatform_Base_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function OceanPlatform_Base_BP.OceanPlatform_Base_BP_C.ExecuteUbergraph_OceanPlatform_Base_BP
	 */
	struct AOceanPlatform_Base_BP_C_ExecuteUbergraph_OceanPlatform_Base_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
