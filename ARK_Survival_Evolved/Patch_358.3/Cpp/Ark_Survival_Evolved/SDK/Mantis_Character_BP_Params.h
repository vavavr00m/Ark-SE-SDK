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
	 * Function Mantis_Character_BP.Mantis_Character_BP_C.BPModifyForwardDirectionInput
	 */
	struct AMantis_Character_BP_C_BPModifyForwardDirectionInput_Params
	{
	public:
		struct FVector                                             directionInput;                                          // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mantis_Character_BP.Mantis_Character_BP_C.BPTimerNonDedicated
	 */
	struct AMantis_Character_BP_C_BPTimerNonDedicated_Params
	{	};

	/**
	 * Function Mantis_Character_BP.Mantis_Character_BP_C.Update Mantis State
	 */
	struct AMantis_Character_BP_C_UpdateMantisState_Params
	{	};

	/**
	 * Function Mantis_Character_BP.Mantis_Character_BP_C.BPTimerServer
	 */
	struct AMantis_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function Mantis_Character_BP.Mantis_Character_BP_C.BPShouldLimitForwardDirection
	 */
	struct AMantis_Character_BP_C_BPShouldLimitForwardDirection_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mantis_Character_BP.Mantis_Character_BP_C.BPCanNotifyTeamAggroAI
	 */
	struct AMantis_Character_BP_C_BPCanNotifyTeamAggroAI_Params
	{
	public:
		class APrimalDinoCharacter*                                Dino;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mantis_Character_BP.Mantis_Character_BP_C.Start Leap Attack
	 */
	struct AMantis_Character_BP_C_StartLeapAttack_Params
	{	};

	/**
	 * Function Mantis_Character_BP.Mantis_Character_BP_C.CheckLeapAttackEnd
	 */
	struct AMantis_Character_BP_C_CheckLeapAttackEnd_Params
	{	};

	/**
	 * Function Mantis_Character_BP.Mantis_Character_BP_C.BlueprintOverrideHarvestDamageType
	 */
	struct AMantis_Character_BP_C_BlueprintOverrideHarvestDamageType_Params
	{
	public:
		float                                                      OutHarvestDamageMultiplier;                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KJ9D[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mantis_Character_BP.Mantis_Character_BP_C.BPNotifyBumpedPawn
	 */
	struct AMantis_Character_BP_C_BPNotifyBumpedPawn_Params
	{
	public:
		class APrimalCharacter*                                    BumpedPawn;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mantis_Character_BP.Mantis_Character_BP_C.AddWeaponDamage
	 */
	struct AMantis_Character_BP_C_AddWeaponDamage_Params
	{
	public:
		float                                                      OriginalDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q9BK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              OriginalDamageType;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ConsumeWeaponDurability;                                 // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S404[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      OutDamage;                                               // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              OutDamageType;                                           // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mantis_Character_BP.Mantis_Character_BP_C.OnRep_bDoingLeapAttack
	 */
	struct AMantis_Character_BP_C_OnRep_bDoingLeapAttack_Params
	{	};

	/**
	 * Function Mantis_Character_BP.Mantis_Character_BP_C.FinishLeapAttack
	 */
	struct AMantis_Character_BP_C_FinishLeapAttack_Params
	{	};

	/**
	 * Function Mantis_Character_BP.Mantis_Character_BP_C.OnLanded
	 */
	struct AMantis_Character_BP_C_OnLanded_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Mantis_Character_BP.Mantis_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 */
	struct AMantis_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mantis_Character_BP.Mantis_Character_BP_C.BlueprintAdjustOutputDamage
	 */
	struct AMantis_Character_BP_C_BlueprintAdjustOutputDamage_Params
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
	 * Function Mantis_Character_BP.Mantis_Character_BP_C.UserConstructionScript
	 */
	struct AMantis_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Mantis_Character_BP.Mantis_Character_BP_C.PlayLeapAttackHitFX
	 */
	struct AMantis_Character_BP_C_PlayLeapAttackHitFX_Params
	{	};

	/**
	 * Function Mantis_Character_BP.Mantis_Character_BP_C.BndEvt__AttackCheckSphere_K2Node_ComponentBoundEvent_12_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AMantis_Character_BP_C_BndEvt__AttackCheckSphere_K2Node_ComponentBoundEvent_12_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    OtherBodyIndex;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bFromSweep;                                              // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0REF[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0018(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Mantis_Character_BP.Mantis_Character_BP_C.ReceiveBeginPlay
	 */
	struct AMantis_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Mantis_Character_BP.Mantis_Character_BP_C.MulticastApplyLeapDownForce
	 */
	struct AMantis_Character_BP_C_MulticastApplyLeapDownForce_Params
	{	};

	/**
	 * Function Mantis_Character_BP.Mantis_Character_BP_C.StartLeapLoopSound
	 */
	struct AMantis_Character_BP_C_StartLeapLoopSound_Params
	{	};

	/**
	 * Function Mantis_Character_BP.Mantis_Character_BP_C.AnimNotify_CycleWeights
	 */
	struct AMantis_Character_BP_C_AnimNotify_CycleWeights_Params
	{	};

	/**
	 * Function Mantis_Character_BP.Mantis_Character_BP_C.AnimNotify_GroundLanding
	 */
	struct AMantis_Character_BP_C_AnimNotify_GroundLanding_Params
	{	};

	/**
	 * Function Mantis_Character_BP.Mantis_Character_BP_C.ExecuteUbergraph_Mantis_Character_BP
	 */
	struct AMantis_Character_BP_C_ExecuteUbergraph_Mantis_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
