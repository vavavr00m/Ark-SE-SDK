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
	 * Function Buff_GeyserLaunch.Buff_GeyserLaunch_C.BPDeactivated
	 */
	struct ABuff_GeyserLaunch_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_GeyserLaunch.Buff_GeyserLaunch_C.BPSetupForInstigator
	 */
	struct ABuff_GeyserLaunch_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_GeyserLaunch.Buff_GeyserLaunch_C.BuffTickServer
	 */
	struct ABuff_GeyserLaunch_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YAR2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_GeyserLaunch.Buff_GeyserLaunch_C.BPActivated
	 */
	struct ABuff_GeyserLaunch_C_BPActivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_GeyserLaunch.Buff_GeyserLaunch_C.UserConstructionScript
	 */
	struct ABuff_GeyserLaunch_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_GeyserLaunch.Buff_GeyserLaunch_C.ExecuteUbergraph_Buff_GeyserLaunch
	 */
	struct ABuff_GeyserLaunch_C_ExecuteUbergraph_Buff_GeyserLaunch_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
