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
	 * Function CrystalWyvern_AIController_BP.CrystalWyvern_AIController_BP_C.BPShouldNotifyAnyNeighbor
	 */
	struct ACrystalWyvern_AIController_BP_C_BPShouldNotifyAnyNeighbor_Params
	{
	public:
		class APrimalDinoCharacter*                                neighbor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EMNU[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CrystalWyvern_AIController_BP.CrystalWyvern_AIController_BP_C.BP_TamedOverrideHorizontalLandingRange
	 */
	struct ACrystalWyvern_AIController_BP_C_BP_TamedOverrideHorizontalLandingRange_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CrystalWyvern_AIController_BP.CrystalWyvern_AIController_BP_C.UserConstructionScript
	 */
	struct ACrystalWyvern_AIController_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function CrystalWyvern_AIController_BP.CrystalWyvern_AIController_BP_C.ExecuteUbergraph_CrystalWyvern_AIController_BP
	 */
	struct ACrystalWyvern_AIController_BP_C_ExecuteUbergraph_CrystalWyvern_AIController_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
