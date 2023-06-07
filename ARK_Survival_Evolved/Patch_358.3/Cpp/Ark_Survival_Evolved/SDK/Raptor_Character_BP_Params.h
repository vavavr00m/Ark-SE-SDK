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
	 * Function Raptor_Character_BP.Raptor_Character_BP_C.IsPounceTarget
	 */
	struct ARaptor_Character_BP_C_IsPounceTarget_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Raptor_Character_BP.Raptor_Character_BP_C.OnPounceTargetDodged
	 */
	struct ARaptor_Character_BP_C_OnPounceTargetDodged_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Raptor_Character_BP.Raptor_Character_BP_C.OnPinnedBuffEnded
	 */
	struct ARaptor_Character_BP_C_OnPinnedBuffEnded_Params
	{
	public:
		class APrimalCharacter*                                    BuffTarget;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Raptor_Character_BP.Raptor_Character_BP_C.PushbackAfterPounceFn
	 */
	struct ARaptor_Character_BP_C_PushbackAfterPounceFn_Params
	{	};

	/**
	 * Function Raptor_Character_BP.Raptor_Character_BP_C.HasPouncePreventionBuff
	 */
	struct ARaptor_Character_BP_C_HasPouncePreventionBuff_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ret;                                                     // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Raptor_Character_BP.Raptor_Character_BP_C.Add Dodge Buff to PounceTarget
	 */
	struct ARaptor_Character_BP_C_AddDodgeBufftoPounceTarget_Params
	{	};

	/**
	 * Function Raptor_Character_BP.Raptor_Character_BP_C.BPDoAttack
	 */
	struct ARaptor_Character_BP_C_BPDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Raptor_Character_BP.Raptor_Character_BP_C.Try Pounce Target
	 */
	struct ARaptor_Character_BP_C_TryPounceTarget_Params
	{	};

	/**
	 * Function Raptor_Character_BP.Raptor_Character_BP_C.SetCurrentTarget
	 */
	struct ARaptor_Character_BP_C_SetCurrentTarget_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Raptor_Character_BP.Raptor_Character_BP_C.InterpToGround
	 */
	struct ARaptor_Character_BP_C_InterpToGround_Params
	{	};

	/**
	 * Function Raptor_Character_BP.Raptor_Character_BP_C.OnPounceLand
	 */
	struct ARaptor_Character_BP_C_OnPounceLand_Params
	{	};

	/**
	 * Function Raptor_Character_BP.Raptor_Character_BP_C.Set Amount Of Time to Pin
	 */
	struct ARaptor_Character_BP_C_SetAmountOfTimetoPin_Params
	{	};

	/**
	 * Function Raptor_Character_BP.Raptor_Character_BP_C.BlueprintCanAttack
	 */
	struct ARaptor_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PPJQ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W44H[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Raptor_Character_BP.Raptor_Character_BP_C.CanJumpInternal
	 */
	struct ARaptor_Character_BP_C_CanJumpInternal_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Raptor_Character_BP.Raptor_Character_BP_C.ApplyPackBuff
	 */
	struct ARaptor_Character_BP_C_ApplyPackBuff_Params
	{	};

	/**
	 * Function Raptor_Character_BP.Raptor_Character_BP_C.InterpToCharacter
	 */
	struct ARaptor_Character_BP_C_InterpToCharacter_Params
	{	};

	/**
	 * Function Raptor_Character_BP.Raptor_Character_BP_C.OnRep_bCanMaul
	 */
	struct ARaptor_Character_BP_C_OnRep_bCanMaul_Params
	{	};

	/**
	 * Function Raptor_Character_BP.Raptor_Character_BP_C.BlueprintCanRiderAttack
	 */
	struct ARaptor_Character_BP_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DVM5[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Raptor_Character_BP.Raptor_Character_BP_C.BPTimerServer
	 */
	struct ARaptor_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function Raptor_Character_BP.Raptor_Character_BP_C.CheckForPounceTarget
	 */
	struct ARaptor_Character_BP_C_CheckForPounceTarget_Params
	{
	public:
		class APrimalCharacter*                                    RetTarget;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Raptor_Character_BP.Raptor_Character_BP_C.PlayRaptorIdle
	 */
	struct ARaptor_Character_BP_C_PlayRaptorIdle_Params
	{	};

	/**
	 * Function Raptor_Character_BP.Raptor_Character_BP_C.ImmobilizeTarget
	 */
	struct ARaptor_Character_BP_C_ImmobilizeTarget_Params
	{
	public:
		class APrimalCharacter*                                    Char;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bImmobilize;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Raptor_Character_BP.Raptor_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 */
	struct ARaptor_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Raptor_Character_BP.Raptor_Character_BP_C.UserConstructionScript
	 */
	struct ARaptor_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Raptor_Character_BP.Raptor_Character_BP_C.ClearPounceIdle
	 */
	struct ARaptor_Character_BP_C_ClearPounceIdle_Params
	{	};

	/**
	 * Function Raptor_Character_BP.Raptor_Character_BP_C.ClearPouncing
	 */
	struct ARaptor_Character_BP_C_ClearPouncing_Params
	{	};

	/**
	 * Function Raptor_Character_BP.Raptor_Character_BP_C.WarpToCharacter
	 */
	struct ARaptor_Character_BP_C_WarpToCharacter_Params
	{	};

	/**
	 * Function Raptor_Character_BP.Raptor_Character_BP_C.ImmobilizeWithDelay
	 */
	struct ARaptor_Character_BP_C_ImmobilizeWithDelay_Params
	{	};

	/**
	 * Function Raptor_Character_BP.Raptor_Character_BP_C.ClearInterpToTimer
	 */
	struct ARaptor_Character_BP_C_ClearInterpToTimer_Params
	{	};

	/**
	 * Function Raptor_Character_BP.Raptor_Character_BP_C.PreventCharacterMovementInput
	 */
	struct ARaptor_Character_BP_C_PreventCharacterMovementInput_Params
	{
	public:
		bool                                                       bPrevent;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Raptor_Character_BP.Raptor_Character_BP_C.SetBuffDeactivateTime
	 */
	struct ARaptor_Character_BP_C_SetBuffDeactivateTime_Params
	{
	public:
		class APrimalBuff*                                         PrimalBuff;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Raptor_Character_BP.Raptor_Character_BP_C.LandDelay
	 */
	struct ARaptor_Character_BP_C_LandDelay_Params
	{	};

	/**
	 * Function Raptor_Character_BP.Raptor_Character_BP_C.MovePouncedDino
	 */
	struct ARaptor_Character_BP_C_MovePouncedDino_Params
	{	};

	/**
	 * Function Raptor_Character_BP.Raptor_Character_BP_C.ForceMoveRider
	 */
	struct ARaptor_Character_BP_C_ForceMoveRider_Params
	{	};

	/**
	 * Function Raptor_Character_BP.Raptor_Character_BP_C.PushbackAfterPounce
	 */
	struct ARaptor_Character_BP_C_PushbackAfterPounce_Params
	{	};

	/**
	 * Function Raptor_Character_BP.Raptor_Character_BP_C.Do RandomPackRoar
	 */
	struct ARaptor_Character_BP_C_DoRandomPackRoar_Params
	{	};

	/**
	 * Function Raptor_Character_BP.Raptor_Character_BP_C.DrawDebugInfo
	 */
	struct ARaptor_Character_BP_C_DrawDebugInfo_Params
	{
	public:
		struct FVector                                             NewParam;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Raptor_Character_BP.Raptor_Character_BP_C.CheckInterpToLocations
	 */
	struct ARaptor_Character_BP_C_CheckInterpToLocations_Params
	{	};

	/**
	 * Function Raptor_Character_BP.Raptor_Character_BP_C.ServerStartPouncing
	 */
	struct ARaptor_Character_BP_C_ServerStartPouncing_Params
	{	};

	/**
	 * Function Raptor_Character_BP.Raptor_Character_BP_C.ExecuteUbergraph_Raptor_Character_BP
	 */
	struct ARaptor_Character_BP_C_ExecuteUbergraph_Raptor_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
