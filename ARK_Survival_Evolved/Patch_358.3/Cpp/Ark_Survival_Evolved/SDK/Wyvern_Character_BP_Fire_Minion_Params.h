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
	 * Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BlueprintCanRiderAttack
	 */
	struct AWyvern_Character_BP_Fire_Minion_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BPNotifySetRider
	 */
	struct AWyvern_Character_BP_Fire_Minion_C_BPNotifySetRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderSetting;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BlueprintAdjustOutputDamage
	 */
	struct AWyvern_Character_BP_Fire_Minion_C_BlueprintAdjustOutputDamage_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      OriginalDamageAmount;                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              HitActor;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              OutDamageType;                                           // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      OutDamageImpulse;                                        // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BP_OnSetDeath
	 */
	struct AWyvern_Character_BP_Fire_Minion_C_BP_OnSetDeath_Params
	{	};

	/**
	 * Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BPTimerServer
	 */
	struct AWyvern_Character_BP_Fire_Minion_C_BPTimerServer_Params
	{	};

	/**
	 * Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BPAdjustDamage
	 */
	struct AWyvern_Character_BP_Fire_Minion_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B8DG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_79IH[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BPOnStaminaDrained
	 */
	struct AWyvern_Character_BP_Fire_Minion_C_BPOnStaminaDrained_Params
	{	};

	/**
	 * Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.OnLanded
	 */
	struct AWyvern_Character_BP_Fire_Minion_C_OnLanded_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BlueprintCanAttack
	 */
	struct AWyvern_Character_BP_Fire_Minion_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4MMB[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.ReceiveTick
	 */
	struct AWyvern_Character_BP_Fire_Minion_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BPGetHUDElements
	 */
	struct AWyvern_Character_BP_Fire_Minion_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BPDoAttack
	 */
	struct AWyvern_Character_BP_Fire_Minion_C_BPDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BPAdjustAttackIndex
	 */
	struct AWyvern_Character_BP_Fire_Minion_C_BPAdjustAttackIndex_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BPTryMultiUse
	 */
	struct AWyvern_Character_BP_Fire_Minion_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BPGetMultiUseEntries
	 */
	struct AWyvern_Character_BP_Fire_Minion_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.UserConstructionScript
	 */
	struct AWyvern_Character_BP_Fire_Minion_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.Multi_ClearRider
	 */
	struct AWyvern_Character_BP_Fire_Minion_C_Multi_ClearRider_Params
	{	};

	/**
	 * Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.DelayedClearRider
	 */
	struct AWyvern_Character_BP_Fire_Minion_C_DelayedClearRider_Params
	{	};

	/**
	 * Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.ExecuteUbergraph_Wyvern_Character_BP_Fire_Minion
	 */
	struct AWyvern_Character_BP_Fire_Minion_C_ExecuteUbergraph_Wyvern_Character_BP_Fire_Minion_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
