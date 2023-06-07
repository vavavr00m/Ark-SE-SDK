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
	 * Function Buff_PreventInputMolerat.Buff_PreventInputMolerat_C.BPDeactivated
	 */
	struct ABuff_PreventInputMolerat_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_PreventInputMolerat.Buff_PreventInputMolerat_C.BPSetupForInstigator
	 */
	struct ABuff_PreventInputMolerat_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_PreventInputMolerat.Buff_PreventInputMolerat_C.BPPreventFirstPerson
	 */
	struct ABuff_PreventInputMolerat_C_BPPreventFirstPerson_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_PreventInputMolerat.Buff_PreventInputMolerat_C.UserConstructionScript
	 */
	struct ABuff_PreventInputMolerat_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_PreventInputMolerat.Buff_PreventInputMolerat_C.ExecuteUbergraph_Buff_PreventInputMolerat
	 */
	struct ABuff_PreventInputMolerat_C_ExecuteUbergraph_Buff_PreventInputMolerat_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
