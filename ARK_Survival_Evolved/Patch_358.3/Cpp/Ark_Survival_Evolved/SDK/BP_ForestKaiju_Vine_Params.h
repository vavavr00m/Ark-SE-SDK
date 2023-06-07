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
	 * Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.VineCollisionCheck
	 */
	struct ABP_ForestKaiju_Vine_C_VineCollisionCheck_Params
	{
	public:
		struct FVector                                             Start;                                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             End;                                                     // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class ACharacter*                                          ActorToIgnore;                                           // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class ACharacter*                                          OtherActorToIgnore;                                      // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ret;                                                     // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q5M1[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.OnRep_EndVineLocation
	 */
	struct ABP_ForestKaiju_Vine_C_OnRep_EndVineLocation_Params
	{	};

	/**
	 * Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.TargetDataContainsTarget
	 */
	struct ABP_ForestKaiju_Vine_C_TargetDataContainsTarget_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.Get Current Vine End Location
	 */
	struct ABP_ForestKaiju_Vine_C_GetCurrentVineEndLocation_Params
	{
	public:
		struct FVector                                             EndPosition;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.GetVineTargets
	 */
	struct ABP_ForestKaiju_Vine_C_GetVineTargets_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.UpdateVines
	 */
	struct ABP_ForestKaiju_Vine_C_UpdateVines_Params
	{	};

	/**
	 * Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.InitVines
	 */
	struct ABP_ForestKaiju_Vine_C_InitVines_Params
	{	};

	/**
	 * Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.ReceiveBeginPlay
	 */
	struct ABP_ForestKaiju_Vine_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.GetAIState
	 */
	struct ABP_ForestKaiju_Vine_C_GetAIState_Params
	{
	public:
		class UForestKaiju_AttackAIState_Grab_C*                   State;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.ReceiveTick
	 */
	struct ABP_ForestKaiju_Vine_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.UserConstructionScript
	 */
	struct ABP_ForestKaiju_Vine_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.SERVER_VineReachedGoal
	 */
	struct ABP_ForestKaiju_Vine_C_SERVER_VineReachedGoal_Params
	{	};

	/**
	 * Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.SetVineStartEnd
	 */
	struct ABP_ForestKaiju_Vine_C_SetVineStartEnd_Params
	{
	public:
		struct FVector                                             Start;                                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             End;                                                     // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.MULTI_ReplicateTargets
	 */
	struct ABP_ForestKaiju_Vine_C_MULTI_ReplicateTargets_Params
	{
	public:
		TArray<struct FVineTargetData>                             Targets;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.ExecuteUbergraph_BP_ForestKaiju_Vine
	 */
	struct ABP_ForestKaiju_Vine_C_ExecuteUbergraph_BP_ForestKaiju_Vine_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
