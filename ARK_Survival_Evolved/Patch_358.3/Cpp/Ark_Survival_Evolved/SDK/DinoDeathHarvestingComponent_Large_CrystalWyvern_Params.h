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
	 * Function DinoDeathHarvestingComponent_Large_CrystalWyvern.DinoDeathHarvestingComponent_Large_CrystalWyvern_C.CheckCorpseDissolve
	 */
	struct UDinoDeathHarvestingComponent_Large_CrystalWyvern_C_CheckCorpseDissolve_Params
	{	};

	/**
	 * Function DinoDeathHarvestingComponent_Large_CrystalWyvern.DinoDeathHarvestingComponent_Large_CrystalWyvern_C.BPCustomHarvestResource
	 */
	struct UDinoDeathHarvestingComponent_Large_CrystalWyvern_C_BPCustomHarvestResource_Params
	{
	public:
		class UPrimalInventoryComponent*                           invComp;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    NumToGive;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NDBW[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              DamageTypeClass;                                         // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              ToActor;                                                 // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ReturnValue;                                             // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoDeathHarvestingComponent_Large_CrystalWyvern.DinoDeathHarvestingComponent_Large_CrystalWyvern_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Large_CrystalWyvern
	 */
	struct UDinoDeathHarvestingComponent_Large_CrystalWyvern_C_ExecuteUbergraph_DinoDeathHarvestingComponent_Large_CrystalWyvern_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
