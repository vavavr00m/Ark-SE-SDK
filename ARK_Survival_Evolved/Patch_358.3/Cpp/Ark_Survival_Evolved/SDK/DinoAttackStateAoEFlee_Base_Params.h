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
	 * Function DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C.Get Octree Group
	 */
	struct UDinoAttackStateAoEFlee_Base_C_GetOctreeGroup_Params
	{
	public:
		EServerOctreeGroup                                         OctreeGroup;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C.OnTickEvent
	 */
	struct UDinoAttackStateAoEFlee_Base_C_OnTickEvent_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C.BPCanAttack
	 */
	struct UDinoAttackStateAoEFlee_Base_C_BPCanAttack_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              OtherTarget;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C.Get AoE Radius
	 */
	struct UDinoAttackStateAoEFlee_Base_C_GetAoERadius_Params
	{
	public:
		float                                                      Radius;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C.Find Characters To Frighten
	 */
	struct UDinoAttackStateAoEFlee_Base_C_FindCharactersToFrighten_Params
	{
	public:
		TArray<class APrimalCharacter*>                            Characters;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C.Should Frighten Character
	 */
	struct UDinoAttackStateAoEFlee_Base_C_ShouldFrightenCharacter_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ShouldFrighten;                                          // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C.Is On Cooldown
	 */
	struct UDinoAttackStateAoEFlee_Base_C_IsOnCooldown_Params
	{
	public:
		bool                                                       OnCooldown;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C.OnBeginEvent
	 */
	struct UDinoAttackStateAoEFlee_Base_C_OnBeginEvent_Params
	{
	public:
		class UPrimalAIState*                                      InParentState;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackStateAoEFlee_Base.DinoAttackStateAoEFlee_Base_C.ExecuteUbergraph_DinoAttackStateAoEFlee_Base
	 */
	struct UDinoAttackStateAoEFlee_Base_C_ExecuteUbergraph_DinoAttackStateAoEFlee_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
