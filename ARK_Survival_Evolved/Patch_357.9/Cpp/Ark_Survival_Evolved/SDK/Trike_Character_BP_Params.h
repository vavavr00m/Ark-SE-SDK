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
	 * Function Trike_Character_BP.Trike_Character_BP_C.Stop Ram Attack Buildup
	 */
	struct ATrike_Character_BP_C_StopRamAttackBuildup_Params
	{	};

	/**
	 * Function Trike_Character_BP.Trike_Character_BP_C.GetRammingSpeedMax
	 */
	struct ATrike_Character_BP_C_GetRammingSpeedMax_Params
	{
	public:
		float                                                      MaxSpeed;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Trike_Character_BP.Trike_Character_BP_C.CanTickStartedRam
	 */
	struct ATrike_Character_BP_C_CanTickStartedRam_Params
	{
	public:
		bool                                                       Tick;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Trike_Character_BP.Trike_Character_BP_C.Start Ram Attack Buildup
	 */
	struct ATrike_Character_BP_C_StartRamAttackBuildup_Params
	{	};

	/**
	 * Function Trike_Character_BP.Trike_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 */
	struct ATrike_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Trike_Character_BP.Trike_Character_BP_C.CanStartRamAttack
	 */
	struct ATrike_Character_BP_C_CanStartRamAttack_Params
	{
	public:
		bool                                                       AllowedToRam;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Trike_Character_BP.Trike_Character_BP_C.BP_GetCustomModifier_MaxSpeed
	 */
	struct ATrike_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SXQG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Trike_Character_BP.Trike_Character_BP_C.Handle Ram Started
	 */
	struct ATrike_Character_BP_C_HandleRamStarted_Params
	{
	public:
		float                                                      RamBuildupTime;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      RamDuration;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Trike_Character_BP.Trike_Character_BP_C.Handle Ram Ended
	 */
	struct ATrike_Character_BP_C_HandleRamEnded_Params
	{
	public:
		bool                                                       HitSomething;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QM9U[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Trike_Character_BP.Trike_Character_BP_C.Calculate Ram Duration
	 */
	struct ATrike_Character_BP_C_CalculateRamDuration_Params
	{
	public:
		float                                                      HoldTime;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Duration;                                                // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Trike_Character_BP.Trike_Character_BP_C.BlueprintCanRiderAttack
	 */
	struct ATrike_Character_BP_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Trike_Character_BP.Trike_Character_BP_C.BPHandleControllerInitiatedAttack
	 */
	struct ATrike_Character_BP_C_BPHandleControllerInitiatedAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Trike_Character_BP.Trike_Character_BP_C.BPHandleOnStopTargeting
	 */
	struct ATrike_Character_BP_C_BPHandleOnStopTargeting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Trike_Character_BP.Trike_Character_BP_C.BPGetHUDOverrideBuffProgressBarPercent
	 */
	struct ATrike_Character_BP_C_BPGetHUDOverrideBuffProgressBarPercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ACHQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Trike_Character_BP.Trike_Character_BP_C.BlueprintCanAttack
	 */
	struct ATrike_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_N3O2[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Trike_Character_BP.Trike_Character_BP_C.GetPawnRootComponent
	 */
	struct ATrike_Character_BP_C_GetPawnRootComponent_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 AsPrimitiveComponent;                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Trike_Character_BP.Trike_Character_BP_C.BPAdjustDamage
	 */
	struct ATrike_Character_BP_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SFCV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JPDF[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VP7P[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Trike_Character_BP.Trike_Character_BP_C.UserConstructionScript
	 */
	struct ATrike_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Trike_Character_BP.Trike_Character_BP_C.DoReflectDamage
	 */
	struct ATrike_Character_BP_C_DoReflectDamage_Params
	{
	public:
		class APawn*                                               DamageTarget;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                BoneName;                                                // 0x000C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Trike_Character_BP.Trike_Character_BP_C.MulticastReflectDamageEffect
	 */
	struct ATrike_Character_BP_C_MulticastReflectDamageEffect_Params
	{
	public:
		class FName                                                FromBone;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Trike_Character_BP.Trike_Character_BP_C.ReceiveBeginPlay
	 */
	struct ATrike_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Trike_Character_BP.Trike_Character_BP_C.CheckRivalryTick
	 */
	struct ATrike_Character_BP_C_CheckRivalryTick_Params
	{	};

	/**
	 * Function Trike_Character_BP.Trike_Character_BP_C.RamBuildupEndEvent
	 */
	struct ATrike_Character_BP_C_RamBuildupEndEvent_Params
	{	};

	/**
	 * Function Trike_Character_BP.Trike_Character_BP_C.BP_OnJumpPressed
	 */
	struct ATrike_Character_BP_C_BP_OnJumpPressed_Params
	{	};

	/**
	 * Function Trike_Character_BP.Trike_Character_BP_C.ExecuteUbergraph_Trike_Character_BP
	 */
	struct ATrike_Character_BP_C_ExecuteUbergraph_Trike_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
