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
	 * Function Buff_PurloviaBury.Buff_PurloviaBury_C.BPPreventAddingOtherBuff
	 */
	struct ABuff_PurloviaBury_C_BPPreventAddingOtherBuff_Params
	{
	public:
		class UClass*                                              anotherBuffClass;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_PurloviaBury.Buff_PurloviaBury_C.PreventActorTargeting
	 */
	struct ABuff_PurloviaBury_C_PreventActorTargeting_Params
	{
	public:
		class AActor*                                              ByActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_PurloviaBury.Buff_PurloviaBury_C.UserConstructionScript
	 */
	struct ABuff_PurloviaBury_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_PurloviaBury.Buff_PurloviaBury_C.ExecuteUbergraph_Buff_PurloviaBury
	 */
	struct ABuff_PurloviaBury_C_ExecuteUbergraph_Buff_PurloviaBury_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
