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
	 * Function PointOfInterestBP_MissionStart.PointOfInterestBP_MissionStart_C.StartMyMission
	 */
	struct APointOfInterestBP_MissionStart_C_StartMyMission_Params
	{
	public:
		class APlayerController*                                   WithPC;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PointOfInterestBP_MissionStart.PointOfInterestBP_MissionStart_C.CanBeViewed
	 */
	struct APointOfInterestBP_MissionStart_C_CanBeViewed_Params
	{
	public:
		class AActor*                                              ByActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C7V0[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PointOfInterestBP_MissionStart.PointOfInterestBP_MissionStart_C.CanPlayerStartMyMission
	 */
	struct APointOfInterestBP_MissionStart_C_CanPlayerStartMyMission_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PointOfInterestBP_MissionStart.PointOfInterestBP_MissionStart_C.BPGetMultiUseEntries
	 */
	struct APointOfInterestBP_MissionStart_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function PointOfInterestBP_MissionStart.PointOfInterestBP_MissionStart_C.BPTryMultiUse
	 */
	struct APointOfInterestBP_MissionStart_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9VPR[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PointOfInterestBP_MissionStart.PointOfInterestBP_MissionStart_C.UserConstructionScript
	 */
	struct APointOfInterestBP_MissionStart_C_UserConstructionScript_Params
	{	};

	/**
	 * Function PointOfInterestBP_MissionStart.PointOfInterestBP_MissionStart_C.ExecuteUbergraph_PointOfInterestBP_MissionStart
	 */
	struct APointOfInterestBP_MissionStart_C_ExecuteUbergraph_PointOfInterestBP_MissionStart_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
