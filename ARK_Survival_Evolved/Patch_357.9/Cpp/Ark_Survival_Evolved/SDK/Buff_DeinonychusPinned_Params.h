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
	 * Function Buff_DeinonychusPinned.Buff_DeinonychusPinned_C.BPInstigatorSleeped
	 */
	struct ABuff_DeinonychusPinned_C_BPInstigatorSleeped_Params
	{
	public:
		bool                                                       bIsSleeped;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_767I[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_DeinonychusPinned.Buff_DeinonychusPinned_C.BPPreventFirstPerson
	 */
	struct ABuff_DeinonychusPinned_C_BPPreventFirstPerson_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_DeinonychusPinned.Buff_DeinonychusPinned_C.UserConstructionScript
	 */
	struct ABuff_DeinonychusPinned_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_DeinonychusPinned.Buff_DeinonychusPinned_C.ExecuteUbergraph_Buff_DeinonychusPinned
	 */
	struct ABuff_DeinonychusPinned_C_ExecuteUbergraph_Buff_DeinonychusPinned_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
