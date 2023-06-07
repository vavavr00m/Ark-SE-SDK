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
	 * Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.ReceiveSkiffVars
	 */
	struct ABuff_GrabbedByBeam_C_ReceiveSkiffVars_Params
	{
	public:
		struct FVector                                             BeamStartLoc;                                            // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             BeamEndLoc;                                              // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		E_HoverSkiffBeamState                                      BeamState;                                               // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.GetBeamCapturePercent
	 */
	struct ABuff_GrabbedByBeam_C_GetBeamCapturePercent_Params
	{
	public:
		float                                                      Percent;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.GetOwnerDragWeight
	 */
	struct ABuff_GrabbedByBeam_C_GetOwnerDragWeight_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T4YZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.GetMaxProgress
	 */
	struct ABuff_GrabbedByBeam_C_GetMaxProgress_Params
	{
	public:
		float                                                      MaxProgress;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.Calculate Progress
	 */
	struct ABuff_GrabbedByBeam_C_CalculateProgress_Params
	{
	public:
		float                                                      timeDelta;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      NewProgress;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.CalculateBeamProgressDelta
	 */
	struct ABuff_GrabbedByBeam_C_CalculateBeamProgressDelta_Params
	{
	public:
		float                                                      timeDelta;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ProgressDelta;                                           // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInvalidProgress;                                        // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CXAL[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.InitializeBuff
	 */
	struct ABuff_GrabbedByBeam_C_InitializeBuff_Params
	{
	public:
		float                                                      MaxBeamLength;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.BuffTickServer
	 */
	struct ABuff_GrabbedByBeam_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.UserConstructionScript
	 */
	struct ABuff_GrabbedByBeam_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.ExecuteUbergraph_Buff_GrabbedByBeam
	 */
	struct ABuff_GrabbedByBeam_C_ExecuteUbergraph_Buff_GrabbedByBeam_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
