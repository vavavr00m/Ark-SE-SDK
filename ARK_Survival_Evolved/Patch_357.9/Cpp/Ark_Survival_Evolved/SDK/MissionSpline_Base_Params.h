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
	 * Function MissionSpline_Base.MissionSpline_Base_C.ActivateParticlesBetweenLocations
	 */
	struct AMissionSpline_Base_C_ActivateParticlesBetweenLocations_Params
	{
	public:
		struct FVector                                             Start;                                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Finish;                                                  // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionSpline_Base.MissionSpline_Base_C.ClearParticles
	 */
	struct AMissionSpline_Base_C_ClearParticles_Params
	{	};

	/**
	 * Function MissionSpline_Base.MissionSpline_Base_C.UpdateSpline
	 */
	struct AMissionSpline_Base_C_UpdateSpline_Params
	{	};

	/**
	 * Function MissionSpline_Base.MissionSpline_Base_C.MakeSpline
	 */
	struct AMissionSpline_Base_C_MakeSpline_Params
	{	};

	/**
	 * Function MissionSpline_Base.MissionSpline_Base_C.UserConstructionScript
	 */
	struct AMissionSpline_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function MissionSpline_Base.MissionSpline_Base_C.ReceiveBeginPlay
	 */
	struct AMissionSpline_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function MissionSpline_Base.MissionSpline_Base_C.ReceiveTick
	 */
	struct AMissionSpline_Base_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionSpline_Base.MissionSpline_Base_C.ExecuteUbergraph_MissionSpline_Base
	 */
	struct AMissionSpline_Base_C_ExecuteUbergraph_MissionSpline_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
