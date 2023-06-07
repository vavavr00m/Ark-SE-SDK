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
	 * Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.GetSocketForMeleeTraceForHitBlockers
	 */
	struct ATitanosaur_Character_BP_C_GetSocketForMeleeTraceForHitBlockers_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                ReturnValue;                                             // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.BlueprintCanAttack
	 */
	struct ATitanosaur_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VCP9[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.BlueprintCanRiderAttack
	 */
	struct ATitanosaur_Character_BP_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.BPSetupTamed
	 */
	struct ATitanosaur_Character_BP_C_BPSetupTamed_Params
	{
	public:
		bool                                                       bWasJustTamed;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9MQM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.CheckTorporDistanceTravel
	 */
	struct ATitanosaur_Character_BP_C_CheckTorporDistanceTravel_Params
	{
	public:
		float                                                      torporIn;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       outValidDistanceTravel;                                  // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GUM1[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.IsHeadObstructed
	 */
	struct ATitanosaur_Character_BP_C_IsHeadObstructed_Params
	{
	public:
		bool                                                       OutVal;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0X0E[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.HasMovedRecently
	 */
	struct ATitanosaur_Character_BP_C_HasMovedRecently_Params
	{
	public:
		bool                                                       bHasMoved;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NM6Z[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.GiveKillExperience
	 */
	struct ATitanosaur_Character_BP_C_GiveKillExperience_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.BPPostInitializeComponents
	 */
	struct ATitanosaur_Character_BP_C_BPPostInitializeComponents_Params
	{	};

	/**
	 * Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.ReceiveBeginPlay
	 */
	struct ATitanosaur_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.BPAdjustDamage
	 */
	struct ATitanosaur_Character_BP_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KOY5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FDEM[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.UserConstructionScript
	 */
	struct ATitanosaur_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.ForceTamedTick
	 */
	struct ATitanosaur_Character_BP_C_ForceTamedTick_Params
	{	};

	/**
	 * Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.ClearTorporHit
	 */
	struct ATitanosaur_Character_BP_C_ClearTorporHit_Params
	{	};

	/**
	 * Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.TorporHit
	 */
	struct ATitanosaur_Character_BP_C_TorporHit_Params
	{	};

	/**
	 * Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.ReceiveTick
	 */
	struct ATitanosaur_Character_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.ExecuteUbergraph_Titanosaur_Character_BP
	 */
	struct ATitanosaur_Character_BP_C_ExecuteUbergraph_Titanosaur_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
