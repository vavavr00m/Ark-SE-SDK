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
	 * Function Ammonite_AIController.Ammonite_AIController_C.BPShouldNotifyNeighbor
	 */
	struct AAmmonite_AIController_C_BPShouldNotifyNeighbor_Params
	{
	public:
		class APrimalDinoCharacter*                                neighbor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ammonite_AIController.Ammonite_AIController_C.UserConstructionScript
	 */
	struct AAmmonite_AIController_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Ammonite_AIController.Ammonite_AIController_C.ExecuteUbergraph_Ammonite_AIController
	 */
	struct AAmmonite_AIController_C_ExecuteUbergraph_Ammonite_AIController_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
