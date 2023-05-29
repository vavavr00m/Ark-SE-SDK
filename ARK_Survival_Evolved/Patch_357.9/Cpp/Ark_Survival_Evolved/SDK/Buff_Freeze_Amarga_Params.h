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
	 * Function Buff_Freeze_Amarga.Buff_Freeze_Amarga_C.BPDeactivated
	 */
	struct ABuff_Freeze_Amarga_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Freeze_Amarga.Buff_Freeze_Amarga_C.BPPreventAddingOtherBuff
	 */
	struct ABuff_Freeze_Amarga_C_BPPreventAddingOtherBuff_Params
	{
	public:
		class UClass*                                              anotherBuffClass;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Freeze_Amarga.Buff_Freeze_Amarga_C.MeleeIncFreeze
	 */
	struct ABuff_Freeze_Amarga_C_MeleeIncFreeze_Params
	{	};

	/**
	 * Function Buff_Freeze_Amarga.Buff_Freeze_Amarga_C.BuffTickServer
	 */
	struct ABuff_Freeze_Amarga_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Freeze_Amarga.Buff_Freeze_Amarga_C.UpdateBuffDescription
	 */
	struct ABuff_Freeze_Amarga_C_UpdateBuffDescription_Params
	{	};

	/**
	 * Function Buff_Freeze_Amarga.Buff_Freeze_Amarga_C.BuffTickClient
	 */
	struct ABuff_Freeze_Amarga_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Freeze_Amarga.Buff_Freeze_Amarga_C.UserConstructionScript
	 */
	struct ABuff_Freeze_Amarga_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_Freeze_Amarga.Buff_Freeze_Amarga_C.ExecuteUbergraph_Buff_Freeze_Amarga
	 */
	struct ABuff_Freeze_Amarga_C_ExecuteUbergraph_Buff_Freeze_Amarga_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
