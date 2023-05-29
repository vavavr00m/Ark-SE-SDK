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
	 * Function Decorator_GasBags_MinInflation.Decorator_GasBags_MinInflation_C.GetMaxInflation
	 */
	struct UDecorator_GasBags_MinInflation_C_GetMaxInflation_Params
	{
	public:
		class AActor*                                              Controller;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      MaxInflation;                                            // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JEYR[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Decorator_GasBags_MinInflation.Decorator_GasBags_MinInflation_C.ReceiveConditionCheck
	 */
	struct UDecorator_GasBags_MinInflation_C_ReceiveConditionCheck_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Decorator_GasBags_MinInflation.Decorator_GasBags_MinInflation_C.ExecuteUbergraph_Decorator_GasBags_MinInflation
	 */
	struct UDecorator_GasBags_MinInflation_C_ExecuteUbergraph_Decorator_GasBags_MinInflation_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
