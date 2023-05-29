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
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.CalculateItemChanceWild
	 */
	struct AGacha_Character_BP_C_CalculateItemChanceWild_Params
	{
	public:
		float                                                      CrystalQuality;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.CalculateItemChance
	 */
	struct AGacha_Character_BP_C_CalculateItemChance_Params
	{
	public:
		float                                                      CrystalQuality;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.HasEnemyTarget
	 */
	struct AGacha_Character_BP_C_HasEnemyTarget_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BTHI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.HasFriendlyTarget
	 */
	struct AGacha_Character_BP_C_HasFriendlyTarget_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BP75[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.GetCrystalDropTransform
	 */
	struct AGacha_Character_BP_C_GetCrystalDropTransform_Params
	{
	public:
		struct FRotator                                            Rotation;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.BlueprintCanRiderAttack
	 */
	struct AGacha_Character_BP_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.BPModifyAimOffsetNoTarget
	 */
	struct AGacha_Character_BP_C_BPModifyAimOffsetNoTarget_Params
	{
	public:
		struct FRotator                                            Aim;                                                     // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FRotator                                            ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.OverrideRandomWanderLocation
	 */
	struct AGacha_Character_BP_C_OverrideRandomWanderLocation_Params
	{
	public:
		struct FVector                                             originalDestination;                                     // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             inVec;                                                   // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.ReceiveAnyDamage
	 */
	struct AGacha_Character_BP_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7H7I[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.InitializeProduction
	 */
	struct AGacha_Character_BP_C_InitializeProduction_Params
	{	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.InitializeCrystals
	 */
	struct AGacha_Character_BP_C_InitializeCrystals_Params
	{	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.FindWanderTarget
	 */
	struct AGacha_Character_BP_C_FindWanderTarget_Params
	{	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.GetDigestionFrequencyMultiplier
	 */
	struct AGacha_Character_BP_C_GetDigestionFrequencyMultiplier_Params
	{
	public:
		float                                                      Mult;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.GetCrystalQualityMultiplier
	 */
	struct AGacha_Character_BP_C_GetCrystalQualityMultiplier_Params
	{
	public:
		float                                                      Mult;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.Get Digestion Amount Multiplier
	 */
	struct AGacha_Character_BP_C_GetDigestionAmountMultiplier_Params
	{
	public:
		float                                                      Multiplier;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.BPModifyAimOffsetTargetLocation
	 */
	struct AGacha_Character_BP_C_BPModifyAimOffsetTargetLocation_Params
	{
	public:
		struct FVector                                             AimTargetLocation;                                       // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.BPUnstasisConsumeFood
	 */
	struct AGacha_Character_BP_C_BPUnstasisConsumeFood_Params
	{
	public:
		float                                                      FoodNeeded;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.GetEfficiencyFactor
	 */
	struct AGacha_Character_BP_C_GetEfficiencyFactor_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.ResetDigestionTimer
	 */
	struct AGacha_Character_BP_C_ResetDigestionTimer_Params
	{	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.BabyDigestion
	 */
	struct AGacha_Character_BP_C_BabyDigestion_Params
	{
	public:
		bool                                                       AteSomething;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZOJW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.Is Unhappy
	 */
	struct AGacha_Character_BP_C_IsUnhappy_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.IsHappy
	 */
	struct AGacha_Character_BP_C_IsHappy_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.CalculateCrystalQuality
	 */
	struct AGacha_Character_BP_C_CalculateCrystalQuality_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.OnRep_EmotionLevel
	 */
	struct AGacha_Character_BP_C_OnRep_EmotionLevel_Params
	{	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.EmotionCheck
	 */
	struct AGacha_Character_BP_C_EmotionCheck_Params
	{	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.ReceiveTick
	 */
	struct AGacha_Character_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.Play Start Digest Animation
	 */
	struct AGacha_Character_BP_C_PlayStartDigestAnimation_Params
	{	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.BPOnDinoCheat
	 */
	struct AGacha_Character_BP_C_BPOnDinoCheat_Params
	{
	public:
		class FName                                                CheatName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSetValue;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WCFI[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.DistributeFood
	 */
	struct AGacha_Character_BP_C_DistributeFood_Params
	{
	public:
		float                                                      FoodEaten;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.Look for Food Drops
	 */
	struct AGacha_Character_BP_C_LookforFoodDrops_Params
	{
	public:
		bool                                                       PlayerAttack;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       FoundSomething;                                          // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5ID3[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.GetItemTamingValue
	 */
	struct AGacha_Character_BP_C_GetItemTamingValue_Params
	{
	public:
		class UPrimalItem*                                         Object;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      affinity;                                                // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsWanted;                                                // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QKKW[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.GetItemFoodValue
	 */
	struct AGacha_Character_BP_C_GetItemFoodValue_Params
	{
	public:
		class UPrimalItem*                                         Object;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsPremium;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I4N8[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      FoodValue;                                               // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.Stop Eating
	 */
	struct AGacha_Character_BP_C_StopEating_Params
	{	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.StartEating
	 */
	struct AGacha_Character_BP_C_StartEating_Params
	{	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.BPNotifyWildHarvestAttack
	 */
	struct AGacha_Character_BP_C_BPNotifyWildHarvestAttack_Params
	{
	public:
		int32_t                                                    harvestIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.GetItemBaseValue
	 */
	struct AGacha_Character_BP_C_GetItemBaseValue_Params
	{
	public:
		class UPrimalItem*                                         PrimalItem;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      BaseValue;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Value;                                                   // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.ChooseLootSet
	 */
	struct AGacha_Character_BP_C_ChooseLootSet_Params
	{	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.BPClientDoMultiUse
	 */
	struct AGacha_Character_BP_C_BPClientDoMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ClientUseIndex;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.BPTryMultiUse
	 */
	struct AGacha_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E7QM[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.BPGetMultiUseEntries
	 */
	struct AGacha_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.WildDigestion
	 */
	struct AGacha_Character_BP_C_WildDigestion_Params
	{	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.Play Digest Animation
	 */
	struct AGacha_Character_BP_C_PlayDigestAnimation_Params
	{	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.SetCrystalScale
	 */
	struct AGacha_Character_BP_C_SetCrystalScale_Params
	{	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.DropCrystal
	 */
	struct AGacha_Character_BP_C_DropCrystal_Params
	{	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.FinishDigestion
	 */
	struct AGacha_Character_BP_C_FinishDigestion_Params
	{	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.TamedDigestion
	 */
	struct AGacha_Character_BP_C_TamedDigestion_Params
	{
	public:
		bool                                                       AteSomething;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DIT4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.Play Release Animation
	 */
	struct AGacha_Character_BP_C_PlayReleaseAnimation_Params
	{	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.DigestionTick
	 */
	struct AGacha_Character_BP_C_DigestionTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_47GU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.TamingTick
	 */
	struct AGacha_Character_BP_C_TamingTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.LookForTamingDrops
	 */
	struct AGacha_Character_BP_C_LookForTamingDrops_Params
	{
	public:
		bool                                                       FoundSomething;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.GiveAffinity
	 */
	struct AGacha_Character_BP_C_GiveAffinity_Params
	{
	public:
		class APrimalCharacter*                                    tamer;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      AffinityToGive;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       WasTamed;                                                // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.WantsResource
	 */
	struct AGacha_Character_BP_C_WantsResource_Params
	{
	public:
		class UPrimalItem*                                         Item;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		bool                                                       IsWanted;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X58E[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      affinity;                                                // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.BPDoHarvestAttack
	 */
	struct AGacha_Character_BP_C_BPDoHarvestAttack_Params
	{
	public:
		int32_t                                                    harvestIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.BPModifyHarvestingQuantity
	 */
	struct AGacha_Character_BP_C_BPModifyHarvestingQuantity_Params
	{
	public:
		float                                                      originalQuantity;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GSTK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              resourceSelected;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.BPModifyHarvestDamage
	 */
	struct AGacha_Character_BP_C_BPModifyHarvestDamage_Params
	{
	public:
		class UPrimalHarvestingComponent*                          harvestComponent;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      inDamage;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.UserConstructionScript
	 */
	struct AGacha_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.AnimNotify_DoneEating
	 */
	struct AGacha_Character_BP_C_AnimNotify_DoneEating_Params
	{	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.AnimNotify_DropCrystal
	 */
	struct AGacha_Character_BP_C_AnimNotify_DropCrystal_Params
	{	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.BPDinoPostBeginPlay
	 */
	struct AGacha_Character_BP_C_BPDinoPostBeginPlay_Params
	{	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.AnimNotify_CheckForCrystal
	 */
	struct AGacha_Character_BP_C_AnimNotify_CheckForCrystal_Params
	{	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.CleanUpEating
	 */
	struct AGacha_Character_BP_C_CleanUpEating_Params
	{	};

	/**
	 * Function Gacha_Character_BP.Gacha_Character_BP_C.ExecuteUbergraph_Gacha_Character_BP
	 */
	struct AGacha_Character_BP_C_ExecuteUbergraph_Gacha_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
