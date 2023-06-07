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
	 * Function Rhynio_AIController_BP.Rhynio_AIController_BP_C.GetHasLOSTo
	 */
	struct ARhynio_AIController_BP_C_GetHasLOSTo_Params
	{
	public:
		struct FVector                                             Loc;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HasLOS;                                                  // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F0HB[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Rhynio_AIController_BP.Rhynio_AIController_BP_C.BPNotifyTargetSet
	 */
	struct ARhynio_AIController_BP_C_BPNotifyTargetSet_Params
	{	};

	/**
	 * Function Rhynio_AIController_BP.Rhynio_AIController_BP_C.ReceiveBeginPlay
	 */
	struct ARhynio_AIController_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Rhynio_AIController_BP.Rhynio_AIController_BP_C.CanUseRangedModeOnActor
	 */
	struct ARhynio_AIController_BP_C_CanUseRangedModeOnActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CanUse;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_AIController_BP.Rhynio_AIController_BP_C.UpdateRangedMode
	 */
	struct ARhynio_AIController_BP_C_UpdateRangedMode_Params
	{
	public:
		bool                                                       InRangedMode;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C0OA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             OverrideDirection;                                       // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ShouldUpdateVel;                                         // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       EarlyOut;                                                // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J1FD[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Rhynio_AIController_BP.Rhynio_AIController_BP_C.BPGetTargetingDesire
	 */
	struct ARhynio_AIController_BP_C_BPGetTargetingDesire_Params
	{
	public:
		class AActor*                                              forTarget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ForTargetingDesireValue;                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_AIController_BP.Rhynio_AIController_BP_C.UserConstructionScript
	 */
	struct ARhynio_AIController_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Rhynio_AIController_BP.Rhynio_AIController_BP_C.ExecuteUbergraph_Rhynio_AIController_BP
	 */
	struct ARhynio_AIController_BP_C_ExecuteUbergraph_Rhynio_AIController_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
