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
	 * Function Sinomacrops_AIController_BP.Sinomacrops_AIController_BP_C.BPForceTargetDinoRider
	 */
	struct ASinomacrops_AIController_BP_C_BPForceTargetDinoRider_Params
	{
	public:
		class AShooterCharacter*                                   playerTarget;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SI4I[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Sinomacrops_AIController_BP.Sinomacrops_AIController_BP_C.GetShouldFleeFromShooterChar
	 */
	struct ASinomacrops_AIController_BP_C_GetShouldFleeFromShooterChar_Params
	{
	public:
		class AShooterCharacter*                                   ShooterChar;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ShouldFlee;                                              // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Sinomacrops_AIController_BP.Sinomacrops_AIController_BP_C.BPGetTargetingDesire
	 */
	struct ASinomacrops_AIController_BP_C_BPGetTargetingDesire_Params
	{
	public:
		class AActor*                                              forTarget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ForTargetingDesireValue;                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Sinomacrops_AIController_BP.Sinomacrops_AIController_BP_C.UserConstructionScript
	 */
	struct ASinomacrops_AIController_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Sinomacrops_AIController_BP.Sinomacrops_AIController_BP_C.ExecuteUbergraph_Sinomacrops_AIController_BP
	 */
	struct ASinomacrops_AIController_BP_C_ExecuteUbergraph_Sinomacrops_AIController_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
