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
	 * Function Para_Character_BP.Para_Character_BP_C.CanUseAlertPulse
	 */
	struct APara_Character_BP_C_CanUseAlertPulse_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Para_Character_BP.Para_Character_BP_C.ReceiveTick
	 */
	struct APara_Character_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Para_Character_BP.Para_Character_BP_C.GetNearbyEnemies
	 */
	struct APara_Character_BP_C_GetNearbyEnemies_Params
	{
	public:
		TArray<struct FVector>                                     Locations;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Para_Character_BP.Para_Character_BP_C.NotifyPlayerAboutAlert
	 */
	struct APara_Character_BP_C_NotifyPlayerAboutAlert_Params
	{
	public:
		class AShooterCharacter*                                   Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Para_Character_BP.Para_Character_BP_C.SetHighFoodConsumption
	 */
	struct APara_Character_BP_C_SetHighFoodConsumption_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Para_Character_BP.Para_Character_BP_C.BPNotifyClearRider
	 */
	struct APara_Character_BP_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Para_Character_BP.Para_Character_BP_C.BPNotifySetRider
	 */
	struct APara_Character_BP_C_BPNotifySetRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderSetting;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Para_Character_BP.Para_Character_BP_C.BPHandleControllerInitiatedAttack
	 */
	struct APara_Character_BP_C_BPHandleControllerInitiatedAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Para_Character_BP.Para_Character_BP_C.ClassifyScanningTarget
	 */
	struct APara_Character_BP_C_ClassifyScanningTarget_Params
	{
	public:
		class AActor*                                              ScanTarget;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EPara_WarningMode                                          WarningMode;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       FleeingCountsAsHostile;                                  // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsEnemy;                                                 // 0x000A(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsSmallCreature;                                         // 0x000B(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Para_Character_BP.Para_Character_BP_C.BP_OnSetDeath
	 */
	struct APara_Character_BP_C_BP_OnSetDeath_Params
	{	};

	/**
	 * Function Para_Character_BP.Para_Character_BP_C.OnRep_IsAlertActive
	 */
	struct APara_Character_BP_C_OnRep_IsAlertActive_Params
	{	};

	/**
	 * Function Para_Character_BP.Para_Character_BP_C.BlueprintCanAttack
	 */
	struct APara_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BOSN[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Para_Character_BP.Para_Character_BP_C.Is Small Creature
	 */
	struct APara_Character_BP_C_IsSmallCreature_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsSmall;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y35R[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Para_Character_BP.Para_Character_BP_C.Is Frighten On Cooldown
	 */
	struct APara_Character_BP_C_IsFrightenOnCooldown_Params
	{
	public:
		bool                                                       OnCooldown;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Para_Character_BP.Para_Character_BP_C.Find Nearby Small Creatures
	 */
	struct APara_Character_BP_C_FindNearbySmallCreatures_Params
	{
	public:
		TArray<class APrimalDinoCharacter*>                        Creatures;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Para_Character_BP.Para_Character_BP_C.BlueprintCanRiderAttack
	 */
	struct APara_Character_BP_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Para_Character_BP.Para_Character_BP_C.IsDinoHostile
	 */
	struct APara_Character_BP_C_IsDinoHostile_Params
	{
	public:
		class APrimalDinoCharacter*                                Dino;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       FleeingCountsAsHostile;                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsHostile;                                               // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Para_Character_BP.Para_Character_BP_C.BPClientDoMultiUse
	 */
	struct APara_Character_BP_C_BPClientDoMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ClientUseIndex;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Para_Character_BP.Para_Character_BP_C.Octree Warning Scan
	 */
	struct APara_Character_BP_C_OctreeWarningScan_Params
	{
	public:
		EPara_WarningMode                                          Mode;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IncludeFleeing;                                          // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5H25[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class APrimalCharacter*>                            FoundEnemies;                                            // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
		bool                                                       FoundSmallCreature;                                      // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y441[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AShooterCharacter*>                           FoundPlayers;                                            // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Para_Character_BP.Para_Character_BP_C.BPTryMultiUse
	 */
	struct APara_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Para_Character_BP.Para_Character_BP_C.BPGetMultiUseEntries
	 */
	struct APara_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Para_Character_BP.Para_Character_BP_C.SetTurretMode
	 */
	struct APara_Character_BP_C_SetTurretMode_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Para_Character_BP.Para_Character_BP_C.UserConstructionScript
	 */
	struct APara_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Para_Character_BP.Para_Character_BP_C.MulticastUpdateWarningMode
	 */
	struct APara_Character_BP_C_MulticastUpdateWarningMode_Params
	{
	public:
		bool                                                       WarningModeEnabled;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Para_Character_BP.Para_Character_BP_C.AlertTick
	 */
	struct APara_Character_BP_C_AlertTick_Params
	{	};

	/**
	 * Function Para_Character_BP.Para_Character_BP_C.StartAlertTick
	 */
	struct APara_Character_BP_C_StartAlertTick_Params
	{	};

	/**
	 * Function Para_Character_BP.Para_Character_BP_C.StopAlertTick
	 */
	struct APara_Character_BP_C_StopAlertTick_Params
	{	};

	/**
	 * Function Para_Character_BP.Para_Character_BP_C.UpdateWarningMode
	 */
	struct APara_Character_BP_C_UpdateWarningMode_Params
	{
	public:
		bool                                                       WarningModeEnabled;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Para_Character_BP.Para_Character_BP_C.ServerRequestAlertPulse
	 */
	struct APara_Character_BP_C_ServerRequestAlertPulse_Params
	{	};

	/**
	 * Function Para_Character_BP.Para_Character_BP_C.DoAlertPulse
	 */
	struct APara_Character_BP_C_DoAlertPulse_Params
	{	};

	/**
	 * Function Para_Character_BP.Para_Character_BP_C.ExecuteUbergraph_Para_Character_BP
	 */
	struct APara_Character_BP_C_ExecuteUbergraph_Para_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
