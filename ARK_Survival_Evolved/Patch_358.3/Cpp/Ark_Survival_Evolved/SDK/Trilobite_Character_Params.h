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
	 * Function Trilobite_Character.Trilobite_Character_C.BP_ForceAllowAddBuff
	 */
	struct ATrilobite_Character_C_BP_ForceAllowAddBuff_Params
	{
	public:
		class UClass*                                              BuffClass;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Trilobite_Character.Trilobite_Character_C.UserConstructionScript
	 */
	struct ATrilobite_Character_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Trilobite_Character.Trilobite_Character_C.ExecuteUbergraph_Trilobite_Character
	 */
	struct ATrilobite_Character_C_ExecuteUbergraph_Trilobite_Character_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
