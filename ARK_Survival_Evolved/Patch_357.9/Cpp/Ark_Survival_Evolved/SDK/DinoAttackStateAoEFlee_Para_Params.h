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
	 * Function DinoAttackStateAoEFlee_Para.DinoAttackStateAoEFlee_Para_C.Should Frighten Character
	 */
	struct UDinoAttackStateAoEFlee_Para_C_ShouldFrightenCharacter_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ShouldFrighten;                                          // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_266Q[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DinoAttackStateAoEFlee_Para.DinoAttackStateAoEFlee_Para_C.Get Octree Group
	 */
	struct UDinoAttackStateAoEFlee_Para_C_GetOctreeGroup_Params
	{
	public:
		EServerOctreeGroup                                         OctreeGroup;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackStateAoEFlee_Para.DinoAttackStateAoEFlee_Para_C.ExecuteUbergraph_DinoAttackStateAoEFlee_Para
	 */
	struct UDinoAttackStateAoEFlee_Para_C_ExecuteUbergraph_DinoAttackStateAoEFlee_Para_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
