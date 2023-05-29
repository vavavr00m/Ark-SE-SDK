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
	 * Function SpaceDolphinLaserUpgrade.SpaceDolphinLaserUpgrade_C.BPCustomIsRelevantForClient
	 */
	struct ASpaceDolphinLaserUpgrade_C_BPCustomIsRelevantForClient_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VCPP[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SpaceDolphinLaserUpgrade.SpaceDolphinLaserUpgrade_C.ReceiveTick
	 */
	struct ASpaceDolphinLaserUpgrade_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceDolphinLaserUpgrade.SpaceDolphinLaserUpgrade_C.UserConstructionScript
	 */
	struct ASpaceDolphinLaserUpgrade_C_UserConstructionScript_Params
	{	};

	/**
	 * Function SpaceDolphinLaserUpgrade.SpaceDolphinLaserUpgrade_C.ExecuteUbergraph_SpaceDolphinLaserUpgrade
	 */
	struct ASpaceDolphinLaserUpgrade_C_ExecuteUbergraph_SpaceDolphinLaserUpgrade_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
