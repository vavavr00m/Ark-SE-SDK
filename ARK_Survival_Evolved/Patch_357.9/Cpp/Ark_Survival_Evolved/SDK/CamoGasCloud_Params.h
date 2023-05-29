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
	 * Function CamoGasCloud.CamoGasCloud_C.BPExcludeAoEActor
	 */
	struct ACamoGasCloud_C_BPExcludeAoEActor_Params
	{
	public:
		class AActor*                                              ActorToConsider;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_542M[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CamoGasCloud.CamoGasCloud_C.UserConstructionScript
	 */
	struct ACamoGasCloud_C_UserConstructionScript_Params
	{	};

	/**
	 * Function CamoGasCloud.CamoGasCloud_C.ExecuteUbergraph_CamoGasCloud
	 */
	struct ACamoGasCloud_C_ExecuteUbergraph_CamoGasCloud_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
