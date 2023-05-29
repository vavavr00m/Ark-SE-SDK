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
	 * Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.GetTargetingDesireTamed
	 */
	struct AIchthyornis_AIController_BP_C_GetTargetingDesireTamed_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      initialDesire;                                           // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      initialMultiplier;                                       // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      desire;                                                  // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      desireMultiplier;                                        // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.StandardTargetChecks
	 */
	struct AIchthyornis_AIController_BP_C_StandardTargetChecks_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AIchthyornis_Character_BP_C*                         IchthyPawn;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       canTarget;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.Get Targeting Desire Wild
	 */
	struct AIchthyornis_AIController_BP_C_GetTargetingDesireWild_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      initialDesire;                                           // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      initialMultiplier;                                       // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      desire;                                                  // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Multiplier;                                              // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.GetAggroNotifyNeighborsRange
	 */
	struct AIchthyornis_AIController_BP_C_GetAggroNotifyNeighborsRange_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.GetTargetingRangeForPlayers
	 */
	struct AIchthyornis_AIController_BP_C_GetTargetingRangeForPlayers_Params
	{
	public:
		float                                                      targetingRange;                                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0ZS5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.DoDepthCheck
	 */
	struct AIchthyornis_AIController_BP_C_DoDepthCheck_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       NotTooDeep;                                              // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UZ53[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.UpdateFlyingOffset
	 */
	struct AIchthyornis_AIController_BP_C_UpdateFlyingOffset_Params
	{	};

	/**
	 * Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.Update Combat Offset
	 */
	struct AIchthyornis_AIController_BP_C_UpdateCombatOffset_Params
	{	};

	/**
	 * Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.ChangedAITarget
	 */
	struct AIchthyornis_AIController_BP_C_ChangedAITarget_Params
	{	};

	/**
	 * Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.BPGetTargetingDesire
	 */
	struct AIchthyornis_AIController_BP_C_BPGetTargetingDesire_Params
	{
	public:
		class AActor*                                              forTarget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ForTargetingDesireValue;                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.UserConstructionScript
	 */
	struct AIchthyornis_AIController_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.ExecuteUbergraph_Ichthyornis_AIController_BP
	 */
	struct AIchthyornis_AIController_BP_C_ExecuteUbergraph_Ichthyornis_AIController_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
