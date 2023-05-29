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
	 * Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.ReceiveTick
	 */
	struct ABaseSwarmChar_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.ThrottledTick
	 */
	struct ABaseSwarmChar_BP_C_ThrottledTick_Params
	{	};

	/**
	 * Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Set Material Vector Parameter
	 */
	struct ABaseSwarmChar_BP_C_SetMaterialVectorParameter_Params
	{
	public:
		class UStaticMeshComponent*                                SM;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                Parameter;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Value;                                                   // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.SendTargetedMessage
	 */
	struct ABaseSwarmChar_BP_C_SendTargetedMessage_Params
	{	};

	/**
	 * Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.SwarmLifetimeEnded
	 */
	struct ABaseSwarmChar_BP_C_SwarmLifetimeEnded_Params
	{	};

	/**
	 * Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.SetSwarmLifetime
	 */
	struct ABaseSwarmChar_BP_C_SetSwarmLifetime_Params
	{
	public:
		float                                                      LifeTime;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.FinishedAttackingTarget
	 */
	struct ABaseSwarmChar_BP_C_FinishedAttackingTarget_Params
	{	};

	/**
	 * Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.StartAttackingTarget
	 */
	struct ABaseSwarmChar_BP_C_StartAttackingTarget_Params
	{	};

	/**
	 * Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.SpottedTarget
	 */
	struct ABaseSwarmChar_BP_C_SpottedTarget_Params
	{	};

	/**
	 * Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.CreateBoidSM
	 */
	struct ABaseSwarmChar_BP_C_CreateBoidSM_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Scale;                                                   // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WQUK[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UStaticMeshComponent*                                ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.UpdateDeadBoids
	 */
	struct ABaseSwarmChar_BP_C_UpdateDeadBoids_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.BPSetCharacterMeshesMaterialScalarParamValue
	 */
	struct ABaseSwarmChar_BP_C_BPSetCharacterMeshesMaterialScalarParamValue_Params
	{
	public:
		class FName                                                ParamName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Value;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.SetMaterialScalarParameter
	 */
	struct ABaseSwarmChar_BP_C_SetMaterialScalarParameter_Params
	{
	public:
		class UStaticMeshComponent*                                SM;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                Parameter;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Value;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Kill Boid
	 */
	struct ABaseSwarmChar_BP_C_KillBoid_Params
	{
	public:
		class UStaticMeshComponent*                                StaticMeshComp;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.BPOnRefreshColorization
	 */
	struct ABaseSwarmChar_BP_C_BPOnRefreshColorization_Params
	{
	public:
		TArray<struct FLinearColor>                                Colors;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Attack Target
	 */
	struct ABaseSwarmChar_BP_C_AttackTarget_Params
	{
	public:
		bool                                                       StopAttacking;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K35Y[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.GetDestroyNonCharacterTargetDuration
	 */
	struct ABaseSwarmChar_BP_C_GetDestroyNonCharacterTargetDuration_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QXE9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.DestroyTarget
	 */
	struct ABaseSwarmChar_BP_C_DestroyTarget_Params
	{	};

	/**
	 * Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.SetFlockBehavior
	 */
	struct ABaseSwarmChar_BP_C_SetFlockBehavior_Params
	{	};

	/**
	 * Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.OnRep_FlockShape
	 */
	struct ABaseSwarmChar_BP_C_OnRep_FlockShape_Params
	{	};

	/**
	 * Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Get Damage Type Adjuster
	 */
	struct ABaseSwarmChar_BP_C_GetDamageTypeAdjuster_Params
	{
	public:
		class UClass*                                              Type;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Multiplier;                                              // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Kill Boids Based On Health
	 */
	struct ABaseSwarmChar_BP_C_KillBoidsBasedOnHealth_Params
	{
	public:
		float                                                      DamageIn;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.OnTargetChanged
	 */
	struct ABaseSwarmChar_BP_C_OnTargetChanged_Params
	{	};

	/**
	 * Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Can Damage Victim in Radius
	 */
	struct ABaseSwarmChar_BP_C_CanDamageVictiminRadius_Params
	{
	public:
		class AActor*                                              Victim;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CanDamage;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.CreateFlock
	 */
	struct ABaseSwarmChar_BP_C_CreateFlock_Params
	{	};

	/**
	 * Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.TickFlock
	 */
	struct ABaseSwarmChar_BP_C_TickFlock_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5PL9[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.ArrayContainsParentDamageType
	 */
	struct ABaseSwarmChar_BP_C_ArrayContainsParentDamageType_Params
	{
	public:
		TArray<class UClass*>                                      DamageTypes;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		class UClass*                                              DamageType;                                              // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1CSF[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.BPAdjustDamage
	 */
	struct ABaseSwarmChar_BP_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YDXK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HMD1[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Damage Victim in Radius
	 */
	struct ABaseSwarmChar_BP_C_DamageVictiminRadius_Params
	{
	public:
		class AActor*                                              Victim;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bDidDoDamage;                                            // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Damage Victims In Radius
	 */
	struct ABaseSwarmChar_BP_C_DamageVictimsInRadius_Params
	{	};

	/**
	 * Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.BPCanCryo
	 */
	struct ABaseSwarmChar_BP_C_BPCanCryo_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.BPOnLethalDamage
	 */
	struct ABaseSwarmChar_BP_C_BPOnLethalDamage_Params
	{
	public:
		float                                                      KillingDamage;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M8W3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0008(0x0020)  (Parm, OutParm, ReferenceParm)
		class AController*                                         Killer;                                                  // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bPreventDeath;                                           // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.BlueprintAdjustOutputDamage
	 */
	struct ABaseSwarmChar_BP_C_BlueprintAdjustOutputDamage_Params
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
	 * Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.UserConstructionScript
	 */
	struct ABaseSwarmChar_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.ReceiveBeginPlay
	 */
	struct ABaseSwarmChar_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.MultiOnLethalDamage
	 */
	struct ABaseSwarmChar_BP_C_MultiOnLethalDamage_Params
	{	};

	/**
	 * Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Server_SpottedTargetEvent
	 */
	struct ABaseSwarmChar_BP_C_Server_SpottedTargetEvent_Params
	{	};

	/**
	 * Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Multicast_SpottedTargetEvent
	 */
	struct ABaseSwarmChar_BP_C_Multicast_SpottedTargetEvent_Params
	{	};

	/**
	 * Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Server_StartAttackingTarget
	 */
	struct ABaseSwarmChar_BP_C_Server_StartAttackingTarget_Params
	{	};

	/**
	 * Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Multicast_StartAttackingTarget
	 */
	struct ABaseSwarmChar_BP_C_Multicast_StartAttackingTarget_Params
	{	};

	/**
	 * Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Server_FinishedAttackingTarget
	 */
	struct ABaseSwarmChar_BP_C_Server_FinishedAttackingTarget_Params
	{	};

	/**
	 * Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Multicast_FinishedAttackingTarget
	 */
	struct ABaseSwarmChar_BP_C_Multicast_FinishedAttackingTarget_Params
	{	};

	/**
	 * Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.Multi_KillBoidsBasedOnHealth
	 */
	struct ABaseSwarmChar_BP_C_Multi_KillBoidsBasedOnHealth_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseSwarmChar_BP.BaseSwarmChar_BP_C.ExecuteUbergraph_BaseSwarmChar_BP
	 */
	struct ABaseSwarmChar_BP_C_ExecuteUbergraph_BaseSwarmChar_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
