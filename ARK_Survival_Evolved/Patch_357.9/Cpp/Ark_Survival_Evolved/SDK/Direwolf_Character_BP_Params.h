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
	 * Function Direwolf_Character_BP.Direwolf_Character_BP_C.BPPreventNotifySound
	 */
	struct ADirewolf_Character_BP_C_BPPreventNotifySound_Params
	{
	public:
		class USoundBase*                                          SoundIn;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XF6W[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Direwolf_Character_BP.Direwolf_Character_BP_C.RidingTick
	 */
	struct ADirewolf_Character_BP_C_RidingTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Direwolf_Character_BP.Direwolf_Character_BP_C.AddHowlCooldownBuff
	 */
	struct ADirewolf_Character_BP_C_AddHowlCooldownBuff_Params
	{	};

	/**
	 * Function Direwolf_Character_BP.Direwolf_Character_BP_C.PackRoar
	 */
	struct ADirewolf_Character_BP_C_PackRoar_Params
	{	};

	/**
	 * Function Direwolf_Character_BP.Direwolf_Character_BP_C.BlueprintDrawFloatingHUD
	 */
	struct ADirewolf_Character_BP_C_BlueprintDrawFloatingHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterX;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterY;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DrawScale;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Direwolf_Character_BP.Direwolf_Character_BP_C.GatherPack
	 */
	struct ADirewolf_Character_BP_C_GatherPack_Params
	{	};

	/**
	 * Function Direwolf_Character_BP.Direwolf_Character_BP_C.BPDoAttack
	 */
	struct ADirewolf_Character_BP_C_BPDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H593[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Direwolf_Character_BP.Direwolf_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 */
	struct ADirewolf_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Direwolf_Character_BP.Direwolf_Character_BP_C.DoSniffAbility
	 */
	struct ADirewolf_Character_BP_C_DoSniffAbility_Params
	{	};

	/**
	 * Function Direwolf_Character_BP.Direwolf_Character_BP_C.GetHiddenDinos
	 */
	struct ADirewolf_Character_BP_C_GetHiddenDinos_Params
	{
	public:
		float                                                      Radius;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_83EF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AActor*>                                      FoundDinos;                                              // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Direwolf_Character_BP.Direwolf_Character_BP_C.GetExplorerChestsInRange
	 */
	struct ADirewolf_Character_BP_C_GetExplorerChestsInRange_Params
	{
	public:
		float                                                      Radius;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H64L[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AActor*>                                      FoundExplorerChests;                                     // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Direwolf_Character_BP.Direwolf_Character_BP_C.UpdateSniffedTargets
	 */
	struct ADirewolf_Character_BP_C_UpdateSniffedTargets_Params
	{	};

	/**
	 * Function Direwolf_Character_BP.Direwolf_Character_BP_C.BPDrawToRiderHUD
	 */
	struct ADirewolf_Character_BP_C_BPDrawToRiderHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Direwolf_Character_BP.Direwolf_Character_BP_C.DrawSniffedTargets
	 */
	struct ADirewolf_Character_BP_C_DrawSniffedTargets_Params
	{
	public:
		class AHUD*                                                HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<class AActor*>                                      LowHealthTargets;                                        // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class AActor*>                                      HiddenTargets;                                           // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class AActor*>                                      ExplorerChests;                                          // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function Direwolf_Character_BP.Direwolf_Character_BP_C.GetEnemysBelowHealthTreshold
	 */
	struct ADirewolf_Character_BP_C_GetEnemysBelowHealthTreshold_Params
	{
	public:
		float                                                      Radius;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      HealthTreshold;                                          // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<class AActor*>                                      FoundActors;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Direwolf_Character_BP.Direwolf_Character_BP_C.BPNotifyClearRider
	 */
	struct ADirewolf_Character_BP_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Direwolf_Character_BP.Direwolf_Character_BP_C.BPNotifySetRider
	 */
	struct ADirewolf_Character_BP_C_BPNotifySetRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderSetting;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Direwolf_Character_BP.Direwolf_Character_BP_C.BPModifyHarvestingQuantity
	 */
	struct ADirewolf_Character_BP_C_BPModifyHarvestingQuantity_Params
	{
	public:
		float                                                      originalQuantity;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HOQJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              resourceSelected;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Direwolf_Character_BP.Direwolf_Character_BP_C.UserConstructionScript
	 */
	struct ADirewolf_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Direwolf_Character_BP.Direwolf_Character_BP_C.ExecuteUbergraph_Direwolf_Character_BP
	 */
	struct ADirewolf_Character_BP_C_ExecuteUbergraph_Direwolf_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
