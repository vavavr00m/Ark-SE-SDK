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
	 * Function Trope_AIController_BP.Trope_AIController_BP_C.BPUpdateBestTarget
	 */
	struct ATrope_AIController_BP_C_BPUpdateBestTarget_Params
	{
	public:
		class AActor*                                              bestTarget;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       dontSetIn;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       dontSetOut;                                              // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_81WU[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Trope_AIController_BP.Trope_AIController_BP_C.UserConstructionScript
	 */
	struct ATrope_AIController_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Trope_AIController_BP.Trope_AIController_BP_C.ExecuteUbergraph_Trope_AIController_BP
	 */
	struct ATrope_AIController_BP_C_ExecuteUbergraph_Trope_AIController_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
