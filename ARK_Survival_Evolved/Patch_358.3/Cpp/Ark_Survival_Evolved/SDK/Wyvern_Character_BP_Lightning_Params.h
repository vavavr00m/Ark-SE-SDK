﻿#pragma once

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
	 * Function Wyvern_Character_BP_Lightning.Wyvern_Character_BP_Lightning_C.BPModifyAimOffsetTargetLocation
	 */
	struct AWyvern_Character_BP_Lightning_C_BPModifyAimOffsetTargetLocation_Params
	{
	public:
		struct FVector                                             AimTargetLocation;                                       // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Wyvern_Character_BP_Lightning.Wyvern_Character_BP_Lightning_C.UserConstructionScript
	 */
	struct AWyvern_Character_BP_Lightning_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Wyvern_Character_BP_Lightning.Wyvern_Character_BP_Lightning_C.ExecuteUbergraph_Wyvern_Character_BP_Lightning
	 */
	struct AWyvern_Character_BP_Lightning_C_ExecuteUbergraph_Wyvern_Character_BP_Lightning_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
