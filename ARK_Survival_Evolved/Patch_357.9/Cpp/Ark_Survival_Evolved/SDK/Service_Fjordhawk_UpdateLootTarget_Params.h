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
	 * Function Service_Fjordhawk_UpdateLootTarget.Service_Fjordhawk_UpdateLootTarget_C.ReceiveTick
	 */
	struct UService_Fjordhawk_UpdateLootTarget_C_ReceiveTick_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DeltaSeconds;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J9MG[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Service_Fjordhawk_UpdateLootTarget.Service_Fjordhawk_UpdateLootTarget_C.ExecuteUbergraph_Service_Fjordhawk_UpdateLootTarget
	 */
	struct UService_Fjordhawk_UpdateLootTarget_C_ExecuteUbergraph_Service_Fjordhawk_UpdateLootTarget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
