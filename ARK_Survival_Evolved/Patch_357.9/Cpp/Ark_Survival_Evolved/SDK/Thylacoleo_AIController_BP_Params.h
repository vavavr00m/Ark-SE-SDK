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
	 * Function Thylacoleo_AIController_BP.Thylacoleo_AIController_BP_C.BPForceTargetDinoRider
	 */
	struct AThylacoleo_AIController_BP_C_BPForceTargetDinoRider_Params
	{
	public:
		class AShooterCharacter*                                   playerTarget;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8GWP[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Thylacoleo_AIController_BP.Thylacoleo_AIController_BP_C.UserConstructionScript
	 */
	struct AThylacoleo_AIController_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Thylacoleo_AIController_BP.Thylacoleo_AIController_BP_C.ExecuteUbergraph_Thylacoleo_AIController_BP
	 */
	struct AThylacoleo_AIController_BP_C_ExecuteUbergraph_Thylacoleo_AIController_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
