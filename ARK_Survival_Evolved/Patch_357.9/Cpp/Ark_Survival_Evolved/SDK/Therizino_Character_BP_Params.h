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
	 * Function Therizino_Character_BP.Therizino_Character_BP_C.GetSocketForMeleeTraceForHitBlockers
	 */
	struct ATherizino_Character_BP_C_GetSocketForMeleeTraceForHitBlockers_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                ReturnValue;                                             // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Therizino_Character_BP.Therizino_Character_BP_C.Cap Harvest Stats
	 */
	struct ATherizino_Character_BP_C_CapHarvestStats_Params
	{	};

	/**
	 * Function Therizino_Character_BP.Therizino_Character_BP_C.BPModifyHarvestingWeightsArray
	 */
	struct ATherizino_Character_BP_C_BPModifyHarvestingWeightsArray_Params
	{
	public:
		TArray<float>                                              resourceWeightsIn;                                       // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class UPrimalItem*>                                 resourceItems;                                           // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<float>                                              resourceWeightsOut;                                      // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Therizino_Character_BP.Therizino_Character_BP_C.BPModifyHarvestDamage
	 */
	struct ATherizino_Character_BP_C_BPModifyHarvestDamage_Params
	{
	public:
		class UPrimalHarvestingComponent*                          harvestComponent;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      inDamage;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Therizino_Character_BP.Therizino_Character_BP_C.Multiply Items by Attack Type
	 */
	struct ATherizino_Character_BP_C_MultiplyItemsbyAttackType_Params
	{
	public:
		int32_t                                                    InputPin;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Therizino_Character_BP.Therizino_Character_BP_C.BPClientDoMultiUse
	 */
	struct ATherizino_Character_BP_C_BPClientDoMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ClientUseIndex;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_97ZD[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Therizino_Character_BP.Therizino_Character_BP_C.BPDoHarvestAttack
	 */
	struct ATherizino_Character_BP_C_BPDoHarvestAttack_Params
	{
	public:
		int32_t                                                    harvestIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q8EK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Therizino_Character_BP.Therizino_Character_BP_C.BlueprintCanAttack
	 */
	struct ATherizino_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K68M[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Therizino_Character_BP.Therizino_Character_BP_C.SetClawAttackAnimByMovement
	 */
	struct ATherizino_Character_BP_C_SetClawAttackAnimByMovement_Params
	{
	public:
		int32_t                                                    Attackindex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Therizino_Character_BP.Therizino_Character_BP_C.BlueprintCanRiderAttack
	 */
	struct ATherizino_Character_BP_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Therizino_Character_BP.Therizino_Character_BP_C.BPModifyHarvestingQuantity
	 */
	struct ATherizino_Character_BP_C_BPModifyHarvestingQuantity_Params
	{
	public:
		float                                                      originalQuantity;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XEOS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              resourceSelected;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Therizino_Character_BP.Therizino_Character_BP_C.GetCurrentHarvestLevel
	 */
	struct ATherizino_Character_BP_C_GetCurrentHarvestLevel_Params
	{
	public:
		int32_t                                                    CurrentLevel;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Therizino_Character_BP.Therizino_Character_BP_C.BPNotifyLevelUp
	 */
	struct ATherizino_Character_BP_C_BPNotifyLevelUp_Params
	{
	public:
		int32_t                                                    ExtraCharacterLevel;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Therizino_Character_BP.Therizino_Character_BP_C.BPGetMultiUseEntries
	 */
	struct ATherizino_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Therizino_Character_BP.Therizino_Character_BP_C.Harvest Multiplier Level Up
	 */
	struct ATherizino_Character_BP_C_HarvestMultiplierLevelUp_Params
	{
	public:
		int32_t                                                    UseEntryIndex;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Therizino_Character_BP.Therizino_Character_BP_C.MakeUseEntryString
	 */
	struct ATherizino_Character_BP_C_MakeUseEntryString_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QX3G[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Therizino_Character_BP.Therizino_Character_BP_C.BPTryMultiUse
	 */
	struct ATherizino_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2PQB[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Therizino_Character_BP.Therizino_Character_BP_C.AddLevelUpEntries
	 */
	struct ATherizino_Character_BP_C_AddLevelUpEntries_Params
	{
	public:
		TArray<struct FMultiUseEntry>                              FullEntryList;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function Therizino_Character_BP.Therizino_Character_BP_C.UserConstructionScript
	 */
	struct ATherizino_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Therizino_Character_BP.Therizino_Character_BP_C.AnimNotify_HarvestEnd
	 */
	struct ATherizino_Character_BP_C_AnimNotify_HarvestEnd_Params
	{	};

	/**
	 * Function Therizino_Character_BP.Therizino_Character_BP_C.AnimNotify_PowerHarvestEnd
	 */
	struct ATherizino_Character_BP_C_AnimNotify_PowerHarvestEnd_Params
	{	};

	/**
	 * Function Therizino_Character_BP.Therizino_Character_BP_C.PlayLevelUpAnim
	 */
	struct ATherizino_Character_BP_C_PlayLevelUpAnim_Params
	{	};

	/**
	 * Function Therizino_Character_BP.Therizino_Character_BP_C.ReceiveBeginPlay
	 */
	struct ATherizino_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Therizino_Character_BP.Therizino_Character_BP_C.BPResetClone
	 */
	struct ATherizino_Character_BP_C_BPResetClone_Params
	{	};

	/**
	 * Function Therizino_Character_BP.Therizino_Character_BP_C.ExecuteUbergraph_Therizino_Character_BP
	 */
	struct ATherizino_Character_BP_C_ExecuteUbergraph_Therizino_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
