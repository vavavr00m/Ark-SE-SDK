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
	 * Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.UpdateGrabAttackLocation
	 */
	struct UForestKaiju_AttackAIState_Grab_C_UpdateGrabAttackLocation_Params
	{	};

	/**
	 * Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.Is Location in Grab Attack Wedge
	 */
	struct UForestKaiju_AttackAIState_Grab_C_IsLocationinGrabAttackWedge_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WTPJ[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.DebugPrintString
	 */
	struct UForestKaiju_AttackAIState_Grab_C_DebugPrintString_Params
	{
	public:
		class FString                                              String;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.StartAttackAnim
	 */
	struct UForestKaiju_AttackAIState_Grab_C_StartAttackAnim_Params
	{	};

	/**
	 * Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.PublicIsValidVineTarget
	 */
	struct UForestKaiju_AttackAIState_Grab_C_PublicIsValidVineTarget_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APrimalCharacter*                                    ForestKaiju;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Valid;                                                   // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.IsValidVineTarget
	 */
	struct UForestKaiju_AttackAIState_Grab_C_IsValidVineTarget_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APrimalCharacter*                                    ForestKaiju;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ValidTarget;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3LSQ[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.OnBeginEvent
	 */
	struct UForestKaiju_AttackAIState_Grab_C_OnBeginEvent_Params
	{
	public:
		class UPrimalAIState*                                      InParentState;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.VineRetracted
	 */
	struct UForestKaiju_AttackAIState_Grab_C_VineRetracted_Params
	{
	public:
		TArray<struct FVineTargetData>                             Targets;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.OnEndEvent
	 */
	struct UForestKaiju_AttackAIState_Grab_C_OnEndEvent_Params
	{	};

	/**
	 * Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.Debug Draw Sphere
	 */
	struct UForestKaiju_AttackAIState_Grab_C_DebugDrawSphere_Params
	{
	public:
		struct FVector                                             Center;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Radius;                                                  // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FLinearColor                                        Color;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.AnimNotifyGrabAttackSmash
	 */
	struct UForestKaiju_AttackAIState_Grab_C_AnimNotifyGrabAttackSmash_Params
	{	};

	/**
	 * Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.DebugDrawLine
	 */
	struct UForestKaiju_AttackAIState_Grab_C_DebugDrawLine_Params
	{
	public:
		struct FVector                                             Start;                                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             End;                                                     // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FLinearColor                                        Color;                                                   // 0x0018(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.SpawnVines
	 */
	struct UForestKaiju_AttackAIState_Grab_C_SpawnVines_Params
	{	};

	/**
	 * Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.BPShouldEndAttack
	 */
	struct UForestKaiju_AttackAIState_Grab_C_BPShouldEndAttack_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.OnTickEvent
	 */
	struct UForestKaiju_AttackAIState_Grab_C_OnTickEvent_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DRQV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.FailsafeMissingVineRetracts
	 */
	struct UForestKaiju_AttackAIState_Grab_C_FailsafeMissingVineRetracts_Params
	{	};

	/**
	 * Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.ExecuteUbergraph_ForestKaiju_AttackAIState_Grab
	 */
	struct UForestKaiju_AttackAIState_Grab_C_ExecuteUbergraph_ForestKaiju_AttackAIState_Grab_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
