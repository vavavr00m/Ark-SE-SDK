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
	 * Function Megatherium_Character_BP.Megatherium_Character_BP_C.BPPreventRiding
	 */
	struct AMegatherium_Character_BP_C_BPPreventRiding_Params
	{
	public:
		class AShooterCharacter*                                   ByPawn;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bDontCheckDistance;                                      // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Megatherium_Character_BP.Megatherium_Character_BP_C.BPTimerServer
	 */
	struct AMegatherium_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function Megatherium_Character_BP.Megatherium_Character_BP_C.ShouldStandUp
	 */
	struct AMegatherium_Character_BP_C_ShouldStandUp_Params
	{
	public:
		bool                                                       megaShouldStand;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Megatherium_Character_BP.Megatherium_Character_BP_C.BPOnAnimPlayedNotify
	 */
	struct AMegatherium_Character_BP_C_BPOnAnimPlayedNotify_Params
	{
	public:
		class UAnimMontage*                                        AnimMontage;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      InPlayRate;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                StartSectionName;                                        // 0x000C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bReplicate;                                              // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bReplicateToOwner;                                       // 0x0015(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForceTickPoseAndServerUpdateMesh;                       // 0x0016(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForceTickPoseOnServer;                                  // 0x0017(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Megatherium_Character_BP.Megatherium_Character_BP_C.BPGetMultiUseEntries
	 */
	struct AMegatherium_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Megatherium_Character_BP.Megatherium_Character_BP_C.BPTryMultiUse
	 */
	struct AMegatherium_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Megatherium_Character_BP.Megatherium_Character_BP_C.CanStandUp
	 */
	struct AMegatherium_Character_BP_C_CanStandUp_Params
	{
	public:
		bool                                                       canStand;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Megatherium_Character_BP.Megatherium_Character_BP_C.HasConflictWithAI
	 */
	struct AMegatherium_Character_BP_C_HasConflictWithAI_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Megatherium_Character_BP.Megatherium_Character_BP_C.CanSitDown
	 */
	struct AMegatherium_Character_BP_C_CanSitDown_Params
	{
	public:
		bool                                                       canSit;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Megatherium_Character_BP.Megatherium_Character_BP_C.BPDoAttack
	 */
	struct AMegatherium_Character_BP_C_BPDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Megatherium_Character_BP.Megatherium_Character_BP_C.BlueprintCanRiderAttack
	 */
	struct AMegatherium_Character_BP_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Megatherium_Character_BP.Megatherium_Character_BP_C.BPModifyHarvestingQuantity
	 */
	struct AMegatherium_Character_BP_C_BPModifyHarvestingQuantity_Params
	{
	public:
		float                                                      originalQuantity;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_34SI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              resourceSelected;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CYKR[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Megatherium_Character_BP.Megatherium_Character_BP_C.BPKilledSomethingEvent
	 */
	struct AMegatherium_Character_BP_C_BPKilledSomethingEvent_Params
	{
	public:
		class APrimalCharacter*                                    killedTarget;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Megatherium_Character_BP.Megatherium_Character_BP_C.OnNewTarget
	 */
	struct AMegatherium_Character_BP_C_OnNewTarget_Params
	{	};

	/**
	 * Function Megatherium_Character_BP.Megatherium_Character_BP_C.BlueprintAdjustOutputDamage
	 */
	struct AMegatherium_Character_BP_C_BlueprintAdjustOutputDamage_Params
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
	 * Function Megatherium_Character_BP.Megatherium_Character_BP_C.BPAdjustDamage
	 */
	struct AMegatherium_Character_BP_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T4T2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7NFS[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZDM2[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Megatherium_Character_BP.Megatherium_Character_BP_C.IsInsect
	 */
	struct AMegatherium_Character_BP_C_IsInsect_Params
	{
	public:
		class APrimalDinoCharacter*                                Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       NewParam;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Megatherium_Character_BP.Megatherium_Character_BP_C.UserConstructionScript
	 */
	struct AMegatherium_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Megatherium_Character_BP.Megatherium_Character_BP_C.SitDown
	 */
	struct AMegatherium_Character_BP_C_SitDown_Params
	{
	public:
		bool                                                       PlayAnim;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Megatherium_Character_BP.Megatherium_Character_BP_C.TryStandUp
	 */
	struct AMegatherium_Character_BP_C_TryStandUp_Params
	{	};

	/**
	 * Function Megatherium_Character_BP.Megatherium_Character_BP_C.TrySitDown
	 */
	struct AMegatherium_Character_BP_C_TrySitDown_Params
	{	};

	/**
	 * Function Megatherium_Character_BP.Megatherium_Character_BP_C.standUp
	 */
	struct AMegatherium_Character_BP_C_standUp_Params
	{	};

	/**
	 * Function Megatherium_Character_BP.Megatherium_Character_BP_C.QuickSitDown
	 */
	struct AMegatherium_Character_BP_C_QuickSitDown_Params
	{	};

	/**
	 * Function Megatherium_Character_BP.Megatherium_Character_BP_C.ReceiveBeginPlay
	 */
	struct AMegatherium_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Megatherium_Character_BP.Megatherium_Character_BP_C.BPUnstasis
	 */
	struct AMegatherium_Character_BP_C_BPUnstasis_Params
	{	};

	/**
	 * Function Megatherium_Character_BP.Megatherium_Character_BP_C.ExecuteUbergraph_Megatherium_Character_BP
	 */
	struct AMegatherium_Character_BP_C_ExecuteUbergraph_Megatherium_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
